#include <iostream>
#include <memory>
#include <string>
#include <chrono>
#include <unordered_map>

#include <grpcpp/grpcpp.h>
#include <grpcpp/health_check_service_interface.h>
#include <grpcpp/ext/proto_server_reflection_plugin.h>

#include "../proto/fibonacci.grpc.pb.h"

using grpc::Server;
using grpc::ServerBuilder;
using grpc::ServerContext;
using grpc::Status;
using fibonacci::Fibonacci;
using fibonacci::FibonacciReply;
using fibonacci::FibonacciRequest;

class FibonacciServiceImpl final : public Fibonacci::Service 
{
    using FibNumber = long long;

public:
    Status calculateFibonacci(ServerContext* context, const FibonacciRequest* request, FibonacciReply* reply) override 
    {
        using namespace std::chrono;

        // calculates TimeStamp in seconds since epoch
        const auto timeStampInSec = std::time(0);

        // calculates start time of the calculation
        const auto startTime = steady_clock::now();

        // calculates fibonacci number for user input
        const auto fibResult = fib(request->payload());

        // calculates duration of fib func in nanosec.
        const auto duration = duration_cast<nanoseconds> (steady_clock::now() - startTime).count();

        // updates and returns count value
        const int count = updateCountCacheAndReturnCount(request->payload(), fibResult);

        reply->set_fib(fibResult);
        reply->set_timestamp(timeStampInSec);
        reply->set_duration(duration);
        reply->set_count(count);

        return Status::OK;
    }

private:
    FibNumber fib(int n)
    {
        const auto foundFibResult = fibResultsCache.find(n);
        if (foundFibResult != fibResultsCache.end())
        {
            return foundFibResult->second;
        }

        return n <= 1 ? n : fibResultsCache[n] = fib(n - 1) + fib(n - 2);
    }

    int updateCountCacheAndReturnCount(int payload, FibNumber fibResult)
    {
        const auto found = inMemoryFibonacciResultCount.find(fibResult);
        if (found == inMemoryFibonacciResultCount.end())
        {
            // initial count for first request is 1
            inMemoryFibonacciResultCount[fibResult] = 1;
            return 1;
        }

        return ++inMemoryFibonacciResultCount[fibResult];
    }

private:
    // As potentional improvment we can add mutexes to protect access to cache values
    std::unordered_map<FibNumber, int> inMemoryFibonacciResultCount{}; // cache for count values
    std::unordered_map<int, FibNumber> fibResultsCache{};              // cache for the previous calculated fibonacci results
};


void RunServer() {
  std::string server_address("0.0.0.0:50051");
  FibonacciServiceImpl service;

  grpc::EnableDefaultHealthCheckService(true);
  grpc::reflection::InitProtoReflectionServerBuilderPlugin();
  ServerBuilder builder;
  builder.AddListeningPort(server_address, grpc::InsecureServerCredentials());
  builder.RegisterService(&service);
  
  std::unique_ptr<Server> server(builder.BuildAndStart());
  std::cout << "Server listening on " << server_address << std::endl;
  server->Wait();
}

int main(int argc, char** argv) {
  RunServer();

  return 0;
}

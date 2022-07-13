#include <iostream>
#include <memory>
#include <string>

#include <grpcpp/grpcpp.h>

#include "../proto/fibonacci.grpc.pb.h"

using grpc::Channel;
using grpc::ClientContext;
using grpc::Status;

using fibonacci::Fibonacci;
using fibonacci::FibonacciReply;
using fibonacci::FibonacciRequest;

struct ResultStruct
{
    long long fibonacciResult;
    long long timeStamp;
    long long duration;
    int count;
};

class FibonacciClient 
{
public:
    FibonacciClient(std::shared_ptr<Channel> channel) 
         : stub_(Fibonacci::NewStub(channel)) {}

    ResultStruct calculateFibonacci(const int payload) 
    {
        FibonacciRequest request;
        request.set_payload(payload);

        FibonacciReply reply;
        ClientContext context;

        Status status = stub_->calculateFibonacci(&context, request, &reply);
        if (status.ok()) 
        {
            return { reply.fib(), reply.timestamp(), reply.duration(), reply.count()};
        } 
        else 
        {
            std::cout << status.error_code() << ": " << status.error_message() << std::endl;
            std::cout << "RPC failed";
            std::exit(-1);
        }
    }

private:
    std::unique_ptr<Fibonacci::Stub> stub_;
};

int main(int argc, char** argv) 
{
    const auto target_str = "localhost:50051";

    FibonacciClient fibClient(grpc::CreateChannel(target_str, grpc::InsecureChannelCredentials()));
    while (1)
    {
        std::cout << "Enter the number to calculate fibonacci number (press 0 to exit): ";
        int input;
        std::cin >> input;
        if (input == 0)
        {
            break;
        }

        ResultStruct result = fibClient.calculateFibonacci(input);
        std::cout << "For payload: " << input << ", { fibonacci = " << result.fibonacciResult << ", timeStamp = " << result.timeStamp << ", duration = " << result.duration << ", count = " << result.count << " }" << std::endl;
        std::cout << std::endl;
    }

    return 0;
}
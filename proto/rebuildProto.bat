protoc -I=. --cpp_out=. Fibonacci.proto

protoc -I=. --grpc_out=. --plugin=protoc-gen-grpc="C:\homeAss\vcpkg\vcpkg\packages\grpc_x64-windows\tools\grpc\grpc_cpp_plugin.exe" Fibonacci.proto
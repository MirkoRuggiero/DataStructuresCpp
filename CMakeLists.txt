    # cmake_minimum_required(VERSION <specify CMake version here>)
project(DataStructures)

set(CMAKE_CXX_STANDARD 17)

add_executable(DataStructures stack/impl/stack.cpp stack/interface/stack.h)
add_executable(queue queue/impl/queue.cpp)
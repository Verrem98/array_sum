cmake_minimum_required(VERSION 3.21)
project(array_sum)

set(CMAKE_CXX_STANDARD 14)

add_executable(array_sum arraySum.cpp ompArraySum.cpp)
cmake_minimum_required(VERSION 3.3)
project(Threads)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.c vector.c vector.h)
add_executable(Threads ${SOURCE_FILES} vector.c vector.h)
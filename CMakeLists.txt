cmake_minimum_required(VERSION 3.3)
project(icpc2083)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES icpc2083.cpp)
add_executable(icpc2083 ${SOURCE_FILES})
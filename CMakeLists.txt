cmake_minimum_required(VERSION 3.4)
project(hw1_C)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(hw1_C ${SOURCE_FILES})
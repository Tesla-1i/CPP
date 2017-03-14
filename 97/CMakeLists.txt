cmake_minimum_required(VERSION 3.6)
project(97)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp 97h1.h 97h2.h 97c1.cpp 97c2.cpp)
add_executable(97 ${SOURCE_FILES})
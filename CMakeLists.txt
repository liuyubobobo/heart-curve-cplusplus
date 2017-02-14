cmake_minimum_required(VERSION 3.5)
project(Heart_Curve)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main5.cpp)
add_executable(Heart_Curve ${SOURCE_FILES})
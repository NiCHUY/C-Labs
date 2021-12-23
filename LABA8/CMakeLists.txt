cmake_minimum_required(VERSION 3.20)
project(Calculator)

set(CMAKE_CXX_STANDARD 20)

add_executable(Calculator main.cpp Stack.h Calculator.h Calculator.cpp)

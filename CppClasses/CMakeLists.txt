cmake_minimum_required(VERSION 4.1)
project(CppClasses)

set(CMAKE_CXX_STANDARD 20)

add_executable(CppClasses main.cpp
        ExampleClass.cpp
        ExampleClass.hpp)

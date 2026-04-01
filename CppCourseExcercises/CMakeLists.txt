cmake_minimum_required(VERSION 4.1)
project(CppCourseExcercises)

set(CMAKE_CXX_STANDARD 20)

add_executable(CppCourseExcercises src/main.cpp
        src/interface/UserInterface.cpp
        include/interface/UserInterface.hpp
        src/excercisesContainer/ExcercisesContainer.cpp
        include/excercisesContainer/ExcercisesContainer.hpp
)

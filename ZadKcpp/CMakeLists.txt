cmake_minimum_required(VERSION 3.12)
project(ZadClassKcpp)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB_RECURSE HEADERS CONFIGURE_DEPENDS "include/*.hpp")
file(GLOB_RECURSE SOURCES CONFIGURE_DEPENDS "src/*.cpp")

list(REMOVE_ITEM HEADERS "${CMAKE_CURRENT_SOURCE_DIR}/include/zadania-funkcja-main/ZadMainExample.hpp")
list(REMOVE_ITEM SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/src/zadania-funkcja-main/ZadMainExample.cpp")

add_executable(ZadClassKcpp ${SOURCES} ${HEADERS}
        src/ZadClassKcpp/include/Section.hpp
        src/ZadClassKcpp/include/Exercise.hpp
        src/ZadClassKcpp/src/main.cpp
        src/ZadClassKcpp/src/Exercise.cpp
        src/ZadClassKcpp/src/Section.cpp
        src/ZadClassKcpp/include/ZadKccp.hpp
        src/ZadClassKcpp/src/ZadKccp.cpp
)

add_executable(
        ZadMainExample
        src/zadania-funkcja-main/ZadMainExample.cpp
        include/zadania-funkcja-main/ZadMainExample.hpp
)

target_include_directories(ZadClassKcpp PUBLIC include)
target_include_directories(ZadMainExample PUBLIC include)



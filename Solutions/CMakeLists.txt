cmake_minimum_required(VERSION 3.12)
project(Solutions)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB_RECURSE HEADERS CONFIGURE_DEPENDS "include/*.hpp")
file(GLOB_RECURSE SOURCES CONFIGURE_DEPENDS "src/*.cpp")

list(REMOVE_ITEM HEADERS "${CMAKE_CURRENT_SOURCE_DIR}/include/zadania-funkcja-main/ZadMainExample.hpp")
list(REMOVE_ITEM SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/src/zadania-funkcja-main/ZadMainExample.cpp")

add_executable(Solutions ${SOURCES} ${HEADERS})
target_include_directories(Solutions PUBLIC include)

add_executable(
        ZadMainExample
        src/zadania-funkcja-main/ZadMainExample.cpp
        include/zadania-funkcja-main/ZadMainExample.hpp
)

target_include_directories(ZadMainExample PUBLIC include)
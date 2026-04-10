cmake_minimum_required(VERSION 4.1)
project(Solutions)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(HEADERS
        include/zadania-funkcja-main/ZadEnumExample.hpp
        include/zadania-funkcja-main/ZadClassExample.hpp
)

set(SOURCES
        src/main.cpp
        src/zadania-funkcja-main/ZadEnumExample.cpp
        src/zadania-funkcja-main/ZadClassExample.cpp
)

add_executable(Solutions ${SOURCES} ${HEADERS})

target_include_directories(Solutions PUBLIC include)

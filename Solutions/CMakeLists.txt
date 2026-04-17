cmake_minimum_required(VERSION 4.1)
project(Solutions)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(HEADERS
        include/zadania-funkcja-main/ZadEnumExample.hpp
        include/zadania-funkcja-main/ZadClassExample.hpp
        include/zadania-funkcja-main/ZadCharExample.hpp
        include/zadania-w-trakcie-zajec/ZadStringExample.hpp
        include/zadania-zwracanie-przez-funkcje/ZadZwracanie.hpp
)

set(SOURCES
        src/main.cpp
        src/zadania-funkcja-main/ZadEnumExample.cpp
        src/zadania-funkcja-main/ZadClassExample.cpp
        src/zadania-funkcja-main/ZadCharExample.cpp

        src/zadania-w-trakcie-zajec/ZadStringExample/ZadStringExample.cpp
        src/zadania-w-trakcie-zajec/ZadStringExample/runZadStringExample.cpp
        src/zadania-zwracanie-przez-funkcje/ZadZwracanie.cpp
)


set(MAIN_HEADER
        include/zadania-funkcja-main/ZadMainExample.hpp
)

set(MAIN_SOURCE
        src/zadania-funkcja-main/ZadMainExample.cpp
)

add_executable(Solutions ${SOURCES} ${HEADERS})
add_executable(ZadMainExample ${MAIN_HEADER} ${MAIN_SOURCE})

target_include_directories(Solutions PUBLIC include)

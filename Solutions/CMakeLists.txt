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
        include/zadania-zwracanie-przez-funkcje/ZadPrzeciazaniePole.hpp
        include/zadania-zwracanie-przez-funkcje/ZadPrzeciazanieDodaj.hpp
        include/zadania-zwracanie-przez-funkcje/ZadPrzeciazaniePlus.hpp
        include/zadania-zwracanie-przez-funkcje/LPrzeciazaniePotega.hpp
        include/zadania-arytmetyka-wskaznikow/ZadArytmetykaWskaznikowZamiana.hpp
        include/zadania-arytmetyka-wskaznikow/ZadArytmetykaWskaznikowSuma.hpp
        include/zadania-arytmetyka-wskaznikow/ZadArytmetykaWskaznikowZnajdowanie.hpp
        include/zadania-arytmetyka-wskaznikow/displayArray.hpp
        include/zadania-arytmetyka-wskaznikow/ZadArytmetykaWskaznikowPrzesuniecie.hpp
        include/zadania-arytmetyka-wskaznikow/ZadArytmetykaWskaznikowRoznica.hpp
        include/zadania-arytmetyka-wskaznikow/ZadArytmetykaWskaznikowKopiowanie.hpp
        include/zadania-arytmetyka-wskaznikow/ZadAdresowaniePamieci.hpp
        include/zadania-arytmetyka-wskaznikow/ZadArytmetykaWskaznikowTabliceA.hpp
)

set(SOURCES
        src/main.cpp
        src/zadania-funkcja-main/ZadEnumExample.cpp
        src/zadania-funkcja-main/ZadClassExample.cpp
        src/zadania-funkcja-main/ZadCharExample.cpp

        src/zadania-w-trakcie-zajec/ZadStringExample/ZadStringExample.cpp
        src/zadania-w-trakcie-zajec/ZadStringExample/runZadStringExample.cpp
        src/zadania-zwracanie-przez-funkcje/ZadZwracanie.cpp
        src/zadania-zwracanie-przez-funkcje/ZadPrzeciazeniePole.cpp
        src/zadania-zwracanie-przez-funkcje/ZadPrzeciazanieDodaj.cpp
        src/zadania-zwracanie-przez-funkcje/ZadPrzeciazaniePlus.cpp
        src/zadania-zwracanie-przez-funkcje/LPrzeciazaniePotega.cpp
        src/zadania-arytmetyka-wskaznikow/ZadArytmetykaWskaznokowZamiana.cpp
        src/zadania-arytmetyka-wskaznikow/ZadArytmetykaWskaznikowSuma.cpp
        src/zadania-arytmetyka-wskaznikow/ZadArytmetykaWskaznikowZnajdowanie.cpp
        src/zadania-arytmetyka-wskaznikow/displayArray.cpp
        src/zadania-arytmetyka-wskaznikow/ZadArytmetykaWskaznikowPrzesuniecie.cpp
        src/zadania-arytmetyka-wskaznikow/ZadArytmetykaWskaznikowRoznica.cpp
        src/zadania-arytmetyka-wskaznikow/ZadArytmetykaWskaznikowKopiowanie.cpp
        src/zadania-arytmetyka-wskaznikow/ZadAdresowaniePamieci.cpp
        src/zadania-arytmetyka-wskaznikow/ZadArytmetykaWskaznikowTabliceA.cpp
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

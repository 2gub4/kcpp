#include <iostream>

#include "zadania-arytmetyka-wskaznikow/ZadArytmetykaWskaznikowPrzesuniecie.hpp"
#include "zadania-funkcja-main/ZadEnumExample.hpp"
#include "zadania-funkcja-main/ZadClassExample.hpp"
#include "zadania-funkcja-main/ZadCharExample.hpp"

#include "zadania-w-trakcie-zajec/ZadStringExample.hpp"

#include "zadania-zwracanie-przez-funkcje/ZadZwracanie.hpp"
#include "zadania-zwracanie-przez-funkcje/ZadPrzeciazaniePole.hpp"
#include "zadania-zwracanie-przez-funkcje/ZadPrzeciazanieDodaj.hpp"
#include "zadania-zwracanie-przez-funkcje/ZadPrzeciazaniePlus.hpp"
#include "zadania-zwracanie-przez-funkcje/LPrzeciazaniePotega.hpp"

#include "zadania-arytmetyka-wskaznikow/ZadArytmetykaWskaznikowZamiana.hpp"
#include "zadania-arytmetyka-wskaznikow/ZadArytmetykaWskaznikowSuma.hpp"
#include "zadania-arytmetyka-wskaznikow/ZadArytmetykaWskaznikowZnajdowanie.hpp"
#include "zadania-arytmetyka-wskaznikow/ZadArytmetykaWskaznikowRoznica.hpp"
#include "zadania-arytmetyka-wskaznikow/ZadArytmetykaWskaznikowKopiowanie.hpp"
#include "zadania-arytmetyka-wskaznikow/ZadAdresowaniePamieci.hpp"

const auto main_separator = std::string(90, '=');
const auto separator = std::string(90, '-');

int main() {
    std::cout << "\n" << main_separator << "\n" << std::endl;
    runZadEnumExample();
    std::cout << "\n" << separator << "\n" << std::endl;
    runZadClassExample();
    std::cout << "\n" << separator << std::endl;
    runStringFunctionsExample();
    std::cout << "\n" << separator << std::endl;
    runZadCharExample();
    std::cout << "\n" << separator << std::endl;
    runZadZwracanie();
    std::cout << "\n" << separator << std::endl;
    runZadPrzeciazeniePole();
    std::cout << "\n" << separator << std::endl;
    runZadPrzeciazenieDodaj();
    std::cout << "\n" << separator << std::endl;
    runZadPrzeciazaniePlus();
    std::cout << "\n" << separator << std::endl;
    runLPrzeciazaniePotega();
    std::cout << "\n" << separator << std::endl;
    runZadArytmetykaWskaznokowZamiana();
    std::cout << "\n" << separator << std::endl;
    runZadArytmetykaWskaznikowSuma();
    std::cout << "\n" << separator << std::endl;
    runZadArytmetykaWskaznikowZnajdowanie();
    std::cout << "\n" << separator << std::endl;
    runZadArytmetykaWskaznikowPrzesuniecie();
    std::cout << "\n" << separator << std::endl;
    runZadArytmetykaWskaznikowRoznica();
    std::cout << "\n" << separator << std::endl;
    runZadArytmetykaWskaznikowKopiowanie();
    std::cout << "\n" << separator << std::endl;
    runZadAdresowaniePamieci();
    std::cout << "\n" << separator << std::endl;

    std::cout << "\n" << separator << std::endl;

    std::cout << "\n" << separator << std::endl;

    std::cout << "\n" << separator << std::endl;

    std::cout << "\n" << separator << std::endl;
    std::cout << "\n" << main_separator << "\n" << std::endl;
    return 0;
}
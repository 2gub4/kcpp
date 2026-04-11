#include <iostream>

#include "zadania-funkcja-main/ZadEnumExample.hpp"
#include "zadania-funkcja-main/ZadClassExample.hpp"
#include <zadania-w-trakcie-zajec/ZadStringExample.hpp>
#include "zadania-funkcja-main/ZadCharExample.hpp"

const std::string main_separator = std::string(90, '=');
const std::string separator = std::string(90, '-');

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

    std::cout << "\n" << main_separator << "\n" << std::endl;
    return 0;
}
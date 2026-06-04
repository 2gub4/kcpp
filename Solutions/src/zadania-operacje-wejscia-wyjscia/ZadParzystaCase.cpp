#include <iostream>
#include <windows.h>
#include "zadania-operacje-wejscia-wyjscia/ZadParzysta.hpp"

void runZadParzystaCase() {
    SetConsoleOutputCP(CP_UTF8);
    int choice = 0;
    int number = 0;
    std::cout << "Choose method of checking if number is even:\n";
    std::cout << "1. Bitwise (&)\n";
    std::cout << "2. Modulo (%)\n";
    std::cout << "3. Ternanry operator (? :)\n";
    std::cout << "Choice: ";
    std::cin >> choice;
    std::cout << "Enter number to be checked: ";
    std::cin >> number;
    std::cout << "Result: ";
    switch (choice) {
    case 1:
        std::cout << "(Bitwise): " << (isEvenBitwise(number) ? "even" : "odd") << "\n";
        break;
    case 2:
        std::cout << "(Modulo): " << (isEvenModulo(number) ? "even" : "odd") << "\n";
        break;
    case 3:
        std::cout << "(Ternary): " << (isEvenTernary(number) ? "even" : "odd") << "\n";
        break;
    default:
        std::cout << "No such option.\n";
        break;
    }
}

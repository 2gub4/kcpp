#include <iostream>
#include "zadania-operacje-wejscia-wyjscia/ZadSwitch.hpp"
#include "zadania-operacje-wejscia-wyjscia/ZadParzysta.hpp"

IsEvenMethodChoice selectMethod(const std::string& input) {
    if (input == "bitwise") return IsEvenMethodChoice::Bitwise;
    if (input == "modulo") return IsEvenMethodChoice::Modulo;
    if (input == "ternary") return IsEvenMethodChoice::Ternary;
    return IsEvenMethodChoice::Undefined;
}
void runZadSwitch() {
    std::string choice;
    int number = 0;
    std::cout << "Select parity check method (bitwise, modulo, ternary): ";
    std::cin >> choice;
    std::cout << "Enter number to check: ";
    std::cin >> number;
    std::cout << "Result: ";
    switch (selectMethod(choice)) {
    case IsEvenMethodChoice::Bitwise:
        std::cout << "(Bitwise): " << (isEvenBitwise(number) ? "even" : "odd") << "\n";
        break;
    case IsEvenMethodChoice::Modulo:
        std::cout << "(Modulo): " << (isEvenModulo(number) ? "even" : "odd") << "\n";
        break;
    case IsEvenMethodChoice::Ternary:
        std::cout << "(Ternary): " << (isEvenTernary(number) ? "even" : "odd") << "\n";
        break;
    case IsEvenMethodChoice::Undefined:
    default:
        std::cout << "No such option\n";
        break;
    }
}
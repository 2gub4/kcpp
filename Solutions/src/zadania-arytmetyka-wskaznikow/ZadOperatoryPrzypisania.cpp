//
// Created by Jakub on 24.05.2026.
//

#include <iostream>

void operatoryArytmetyczne(const int a, const int b)
{
    std::cout << "\ta = " << a << ", b = " << b << "\n";
    const auto num1 = static_cast<float>(a);
    const auto num2 = static_cast<float>(b);
    std::cout << "\taddition: " << num1 << " + " << num2 << " = " << num1 + num2 << "\n";
    std::cout << "\tsubtraction: " << num1 << " - " << num2 << " = " << num1 - num2 << "\n";
    std::cout << "\tmultiplication: " << num1 << " * " << num2 << " = " << num1 * num2 << "\n";
    std::cout << "\tdivision: " << num1 << " / " << num2 << " = " << num1 / num2 << "\n";
    std::cout << "\tmodulo division (remainder): " << num1 << " % " << num2 << " = " << static_cast<int>(num1) % static_cast<int>(num2) << "\n";
}

void operatoryPrzypisania(int a, int b)
{
    std::cout << "\ta = " << a << ", b = " << b << "\n";
    std::cout << "\tmodulo division (remainder) with assignment: " << a << " %= " << b << "\t-->\t";
    a %= b;
    std::cout << "a = " << a << " b = " << b << "\n";
    auto num1 = static_cast<float>(a);
    const auto num2 = static_cast<float>(b);
    std::cout << "\taddition with assignment: " << num1 << " += " << num2 << "\t-->\t";
    num1 += num2;
    std::cout << "a = " << num1 << " b = " << num2 << "\n";
    std::cout << "\tsubtraction with assignment: " << num1 << " -= " << num2 << "\t-->\t";
    num1 -= num2;
    std::cout << "a = " << num1 << " b = " << num2 << "\n";
    std::cout << "\tmultiplication with assignment: " << num1 << " *= " << num2 << "\t-->\t";
    num1 *= num2;
    std::cout << "a = " << num1 << " b = " << num2 << "\n";
    std::cout << "\tdivision with assignment: " << num1 << " /= " << num2 << "\t-->\t";
    num1 /= num2;
    std::cout << "a = " << num1 << " b = " << num2 << "\n";
}

void runZadOperatoryPzypisania()
{
    constexpr int number = 7;
    constexpr int number2 = 3;
    std::cout << "Arithmetic operators examples: " << std::endl;
    operatoryArytmetyczne(number, number2);
    std::cout << "Assignment operators examples: " << std::endl;
    operatoryPrzypisania(number, number2);
}

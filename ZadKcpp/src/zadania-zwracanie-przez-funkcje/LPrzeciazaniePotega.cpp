//
// Created by Jakub on 15.05.2026.
//

#include <iostream>
#include <cmath>

int potega(const int a, const int b)
{
    return std::pow(a, b);
}

double potega(const double a, const double b)
{
    return std::pow(a, b);
}

void runLPrzeciazaniePotega()
{
    constexpr int a = 6;
    constexpr int b = 3;
    constexpr double c = 3.7;
    constexpr double d = 1.9;
    std::cout << a << "^(" << b << ") = " << potega(a, b) << "\n";
    std::cout << c << "^(" << d << ") = " << potega(c, d) << std::endl;
}
//
// Created by student on 8.05.2026.
//

#include <string>
#include <iostream>

int dodaj(int a, int b) {
    return a + b;
}

float dodaj(float a, float b) {
    return a + b;
}

std::string dodaj(std::string &str, const std::string &str2) {
    for (int i = 0; i < str2.length(); i++) {
        str += str2[i];
    }
    return str;
}

void runZadPrzeciazenieDodaj() {
    int a = 38;
    int b = 29;
    float c = 3.14;
    float d = 2.73;
    std::string str = "Hello";
    std::string str2 = " World!";
    std::cout << "Sum of two integers: " << a << " + " << b << " = " << dodaj(a, b) << std::endl;
    std::cout << "Sum of two floating point numbers: " << c << " + " << d << " = " << dodaj(c, d) << std::endl;
    std::cout << "Concatenation of two strings: '" << str << "' + '" << str2 << "' = '" << dodaj(str, str2) << "'" << std::endl;
}
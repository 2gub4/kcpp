#include <iostream>
#include <windows.h>

void printIsoscelesTriangle(const int size) {
    std::cout << "\nTrójkąt równoramienny:\n";
    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= size - i; j++) {
            std::cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            std::cout << "*";
        }
        std::cout << "\n";
    }
}

void printNumberPyramid(const int size) {
    std::cout << "\nPiramida z liczb:\n";
    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= size - i; j++) {
            std::cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            std::cout << i << " ";
        }
        std::cout << "\n";
    }
}

void runZadKsztalt() {
    SetConsoleOutputCP(CP_UTF8);
    constexpr int size = 9;
    // std::cout << "Podaj rozmiar: ";
    // std::cin >> size;
    printIsoscelesTriangle(size);
    printNumberPyramid(size);
}
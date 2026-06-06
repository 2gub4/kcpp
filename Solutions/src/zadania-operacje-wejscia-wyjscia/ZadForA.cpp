#include <iostream>
#include <windows.h>

void printOddNumbers(const int n) {
    std::cout << "Liczby nieparzyste od 1 do " << n << ":\n";
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            std::cout << i << " ";
        }
    }
    std::cout << "\n";
}

void printDivisibleBySeven(const int n) {
    std::cout << "Liczby podzielne przez 7 od 1 do " << n << ":\n";
    for (int i = 1; i <= n; i++) {
        if (i % 7 == 0) {
            std::cout << i << " ";
        }
    }
    std::cout << "\n";
}

void runZadForA() {
    SetConsoleOutputCP(CP_UTF8);
    constexpr int n = 20;
    printOddNumbers(n);
    printDivisibleBySeven(n);
}
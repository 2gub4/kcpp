#include <iostream>
#include <windows.h>

long long calculateFactorial(int n) {
    if (n == 0) return 1;
    long long factorial = 1;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    return factorial;
}

long long calculateFactorialSum(int n) {
    long long sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += calculateFactorial(i);
    }
    return sum;
}

void runZadSilnia() {
    SetConsoleOutputCP(CP_UTF8);
    constexpr int number = 11;
    // std::cout << "Podaj liczbe do obliczenia silni: ";
    // std::cin >> number;
    if (number < 0) {
        std::cout << "Silnia jest zdefiniowana tylko dla liczb nieujemnych!\n";
        return;
    }
    std::cout << "Silnia z " << number << " wynosi: " << calculateFactorial(number) << "\n";
    std::cout << "Suma silni od 1 do " << number << " wynosi: " << calculateFactorialSum(number) << "\n";
}
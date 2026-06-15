#include <iostream>
#include <iomanip>
#include <windows.h>
#include <string>

// Stała          Wartość (domyślnie)    Notacja stała      Notacja naukowa
// --------       -----------------      -------------      --------------
// Pi             3.14159                3.141593           3.141593e+00
// e              2.71828                2.718282           2.718282e+00
// Złoty podział  1.61803                1.618034           1.618034e+00

void printScientificData() {
    std::cout << std::left << std::setw(14) << "Stała"
              << std::left << std::setw(21) << " Wartość (domyślnie)"
              << std::left << std::setw(20) << "   Notacja stała"
              << std::left << std::setw(20) << "  Notacja naukowa" << "\n";
    std::cout << std::left << std::setw(15) << "--------"
              << std::left << std::setw(23) << "-----------------"
              << std::left << std::setw(19) << "-------------"
              << std::left << std::setw(19) << "--------------" << "\n";
    constexpr double pi = 3.141593;
    constexpr double e = 2.718282;
    constexpr double goldenRatio = 1.618034;
    std::cout << std::left << std::setw(15) << "Pi"
              << std::left << std::setw(23) << std::defaultfloat << std::setprecision(6) << pi
              << std::left << std::setw(19) << std::fixed << std::setprecision(6) << pi
              << std::left << std::setw(18) << std::scientific << std::setprecision(6) << pi << "\n";
    std::cout << std::left << std::setw(15) << "e"
              << std::left << std::setw(23) << std::defaultfloat << std::setprecision(6) << e
              << std::left << std::setw(19) << std::fixed << std::setprecision(6) << e
              << std::left << std::setw(18) << std::scientific << std::setprecision(6) << e << "\n";
    std::cout << std::left << std::setw(17) << "Złoty podział"
              << std::left << std::setw(23) << std::defaultfloat << std::setprecision(6) << goldenRatio
              << std::left << std::setw(19) << std::fixed << std::setprecision(6) << goldenRatio
              << std::left << std::setw(18) << std::scientific << std::setprecision(6) << goldenRatio << "\n";
}

void runZadDaneNaukoweFormat() {
    SetConsoleOutputCP(CP_UTF8);
    printScientificData();
}
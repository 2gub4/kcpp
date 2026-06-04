// Zadanie 4.4
// --------------------------------------
// Napisz program, który wyświetli tabelę produktów w następującym formacie:
//
// | Nazwa          | Cena    | Ilosc |
// |----------------|---------|-------|
// | Chleb          |   4.99  |    5  |
// | Mleko          |   3.20  |   10  |
// | Jajka (10 szt) |   8.50  |    3  |
//
// - Użyj manipulatorów setw, left i right do wyrównania kolumn
// - Ceny wyświetl z dokładnością do 2 miejsc po przecinku
// - Szerokość kolumn: Nazwa (15 znaków), Cena (8 znaków), Ilosc (7 znaków)
// - nazwij program: ZadTabelaFormat.cc

#include <iostream>
#include <iomanip>
#include <windows.h>
#include <vector>
#include "zadania-operacje-wejscia-wyjscia/ZadTabelaFormat.hpp"

void printProducts(const std::vector<Product>& products) {
    std::cout << "| " << std::left << std::setw(15) << "Nazwa"
              << "| " << std::left << std::setw(8) << "Cena"
              << "|" << std::left << std::setw(7) << " Ilosc" << "|\n";
    std::cout << "|----------------|---------|-------|\n";
    for (const auto& [name, price, quantity] : products) {
        std::cout << "| " << std::left << std::setw(15) << name
                  << "| " << std::right << std::setw(6) << std::fixed << std::setprecision(2) << price << "  "
                  << "|" << std::right << std::setw(5) << quantity << "  |\n";
    }
}

void runZadTabelaFormat() {
    SetConsoleOutputCP(CP_UTF8);
    const std::vector<Product> products = {
        {"Chleb", 4.99, 5},
        {"Mleko", 3.20, 10},
        {"Jajka (10 szt)", 8.50, 3}
    };
    printProducts(products);
}
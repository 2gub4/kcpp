//
// Created by Jakub on 17.05.2026.
//

#include <iostream>
#include <ostream>

#include "zadania-arytmetyka-wskaznikow/displayArray.hpp"

void kopiujTablice(const int* src, int* dest, const int rozmiar) {
    for (int i = 0; i < rozmiar; ++i) {
        *(dest + i) = *(src + i);
    }
}

void runZadArytmetykaWskaznikowKopiowanie()
{
    constexpr int arraySize = 10;
    constexpr int array[] = {-10, 26, -17, -16, -8, 29, -19, 22, 5, 3, 7, 3};
    int copiedArray[arraySize];
    std::cout << "Original array: " << displayArray(array, arraySize) << std::endl;
    kopiujTablice(array, copiedArray, arraySize);
    std::cout << "Copied array: " << displayArray(copiedArray, arraySize) << std::endl;
}

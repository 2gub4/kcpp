//
// Created by Jakub on 22.05.2026.
//

#include <iostream>
#include "zadania-arytmetyka-wskaznikow/displayArray.hpp"
#include "zadania-arytmetyka-wskaznikow/ZadArytmetykaWskaznikowPrzesuniecie.hpp"
#include "zadania-arytmetyka-wskaznikow/ZadArytmetykaWskaznikowSuma.hpp"
#include "zadania-arytmetyka-wskaznikow/ZadArytmetykaWskaznikowZnajdowanie.hpp"

void fillArray(int* array, const int arraySize)
{
    for (int i = 0; i < arraySize; i++)
    {
        *(array + i) = i + 1;
    }
}

void reverseArray(int* array, const int arraySize)
{
    for (int i = 0; i < arraySize - 1; ++i)
    {
        przesun(array + i, arraySize - i);
    }
}

void runZadArytmetykaWskaznikowTabliceA()
{
    constexpr int arraySize = 10;
    static int array[arraySize];
    fillArray(array, arraySize);
    std::cout << "Static array of numbers 1-10: " << displayArray(array, arraySize) << "\n";
    std::cout << "Sum of array elements: " << suma(array, arraySize) << "\n";
    std::cout << "Max element: " << *(maxElement(array, arraySize)) << "\n";
    reverseArray(array, arraySize);
    std::cout << "Reversed order: " << displayArray(array, arraySize) << std::endl;
}
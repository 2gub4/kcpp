//
// Created by Jakub on 22.05.2026.
//

#include <iostream>

#include "zadania-arytmetyka-wskaznikow/displayArray.hpp"

void fillWithUserInput(float* array, const int arraySize)
{
    std::cout << "Enter " << arraySize << " floating point numbers: \n";
    for (int i = 0; i < arraySize; i++)
    {
        std::cout << "array[" << i << "]:";
        std::cin >> *(array + i);
    }
    std::cout << std::endl;
}

void fillWithDoubledElements(const float* originalArray, float* doubledArray, const int arraysSize)
{
    for (int i = 0; i < arraysSize; i++)
    {
        *(doubledArray + i) = *(originalArray + i) * 2;
    }
}

void fillWithSumsOfCorrespondingElements(const float* originalArray, const float* doubledArray, float* destArray, const int arraysSize)
{
    for (int i = 0; i < arraysSize; i++)
    {
        *(destArray + i) = *(originalArray + i) + doubledArray[i];
    }
}

void runZadArytmetykaWskaznikowTabliceB()
{
    constexpr int arraySize = 5;
    float initialArray[arraySize];
    float doubledArray[arraySize];
    float finalArray[arraySize];
    fillWithUserInput(initialArray, arraySize);
    fillWithDoubledElements(initialArray, doubledArray, arraySize);
    fillWithSumsOfCorrespondingElements(initialArray, doubledArray, finalArray, arraySize);
    std::cout << "Array of entered elements: " << displayArray(initialArray, arraySize) << "\n";
    std::cout << "Array of doubled elements: " << displayArray(doubledArray, arraySize) << "\n";
    std::cout << "Array of sums of corresponding elements of initial array and doubled array: \n\t";
    std::cout << displayArray(finalArray, arraySize) << std::endl;
}

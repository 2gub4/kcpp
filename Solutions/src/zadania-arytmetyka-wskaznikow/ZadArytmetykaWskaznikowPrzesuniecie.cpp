//
// Created by Jakub on 15.05.2026.
//

#include <iostream>

#include "zadania-arytmetyka-wskaznikow/displayArray.hpp"

void przesun(int* array, const int arraySize)
{
    const int ostatni = *(array + arraySize - 1);
    for (int i = arraySize - 1; i > 0; --i) {
        *(array + i) = *(array + i - 1);
    }
    *array = ostatni;
}


void runZadArytmetykaWskaznikowPrzesuniecie()
{
    constexpr int arrSize = 10;
    int array[] = {24,0,1,-4,11,-5,10,-1,2,10};
    int copiedArray[arrSize];
    std::copy(std::begin(array), std::end(array), copiedArray);
    std::cout << "Original array: " << displayArray(array, arrSize) << std::endl;
    przesun(array, arrSize);
    std::cout << "Modified array: " << displayArray(array, arrSize) << std::endl;
    std::cout << "Full element rotation: " <<std::endl;
    for (int i = 0; i < arrSize; i++ )
    {
        std::cout << "\t" << i+1 << ". " << displayArray(copiedArray, arrSize) << std::endl;
        przesun(copiedArray, arrSize);
    }
    std::cout << "\t" << arrSize+1 << ". " << displayArray(copiedArray, arrSize) << std::endl;
}
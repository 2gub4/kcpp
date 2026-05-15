//
// Created by Jakub on 15.05.2026.
//

#include <iostream>

#include "zadania-arytmetyka-wskaznikow/displayArray.hpp"

int* maxElement(int* array, const int arraySize)
{
    int* maxPointer = array;
    for (int i = 0; i < arraySize; i++)
    {
        if (*(array + i) > *maxPointer)
        {
            maxPointer = array + i;
        }
    }
    return maxPointer;
}

void runZadArytmetykaWskaznikowZnajdowanie()
{
    int arraySize = 10;
    int array[] = {-1, 11, 2, 15, -8, 4, 21, 10, -9, 12};
    std::cout << "Max element of given array ( " << displayArray(array, arraySize) << " ) equals to: " << *(maxElement(array, arraySize)) << std::endl;
}
//
// Created by Jakub on 15.05.2026.
//

#include <iostream>
#include <string>

#include "zadania-arytmetyka-wskaznikow/displayArray.hpp"

int suma(const int* arr, const int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += *(arr + i);
    }
    return sum;
}

void runZadArytmetykaWskaznikowSuma()
{
    constexpr int arrSize = 13;
    constexpr int array[] = {15,-3,7,24,0,1,-4,11,-5,10,-1,2,10};
    std::cout << "Sum of elements of array[13] = " << displayArray(array, arrSize) << " equals to: " << suma(array, arrSize) << std::endl;
}
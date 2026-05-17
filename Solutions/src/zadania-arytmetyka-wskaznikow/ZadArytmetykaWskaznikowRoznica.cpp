//
// Created by Jakub on 17.05.2026.
//

#include <iostream>

#include "zadania-arytmetyka-wskaznikow/displayArray.hpp"

void runZadArytmetykaWskaznikowRoznica()
{
    constexpr int arraySize = 10;
    constexpr int array[] = {22, -69, -14, 90, -44, -46, -37, 93, 83, -20, 4};
    const int* idx1 = &array[4];
    const int* idx2 = &array[9];
    std::cout << "Array: " << displayArray(array, arraySize) << std::endl;
    std::cout << "Distance between " << *idx1 << " and " << *idx2 << " equals to " << idx2 - idx1 << std::endl;
}

//
// Created by Jakub on 24.05.2026.
//

#include <cmath>
#include <iostream>
#include <ostream>

#include "zadania-arytmetyka-wskaznikow/displayArray.hpp"

int binToDec(const int* eightBitArray)
{
    double result = 0;
    constexpr int size = 8;
    for (int i = 0; i < size; i++)
    {
        result += *(eightBitArray + i) * std::pow(2, size-i-1);
    }
    return static_cast<int>(result);
}

void runLBitoweOperatoryLogiczneSingleVariable()
{
    constexpr int binaryArray[8] = {1,0,0,0,1,1,1,0};
    constexpr int binaryArray2[8] = {1,1,0,0,1,1,1,0};
    constexpr int binaryArray3[8] = {0,0,0,0,0,1,1,1};
    constexpr int binaryArray4[8] = {1,1,1,1,1,1,1,1};
    constexpr int binaryArray5[8] = {0,0,1,1,0,1,1,0};
    constexpr int binaryArray6[8] = {0,0,1,0,1,1,1,1};
    std::cout << displayArray(binaryArray, 8) << " = " << binToDec(binaryArray) << std::endl;
    std::cout << displayArray(binaryArray2, 8) << " = " << binToDec(binaryArray2) << std::endl;
    std::cout << displayArray(binaryArray3, 8) << " = " << binToDec(binaryArray3) << std::endl;
    std::cout << displayArray(binaryArray4, 8) << " = " << binToDec(binaryArray4) << std::endl;
    std::cout << displayArray(binaryArray5, 8) << " = " << binToDec(binaryArray5) << std::endl;
    std::cout << displayArray(binaryArray6, 8) << " = " << binToDec(binaryArray6) << std::endl;
}
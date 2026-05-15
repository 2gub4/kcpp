//
// Created by Jakub on 15.05.2026.
//

#include <string>

std::string displayArray(const int* arr, int size)
{
    std::string arrayString = "[";
    for (int i = 0; i < size; ++i)
    {
        arrayString += std::to_string(*(arr + i));
        if (i != size - 1)
        {
            arrayString += ", ";
        }
    }
    arrayString += "]";
    return arrayString;
}
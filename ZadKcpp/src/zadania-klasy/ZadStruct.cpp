#include "zadania-klasy/ZadStruct.hpp"
#include <iostream>
#include <iomanip>

SampleStruct::SampleStruct() : valueOne(0), valueTwo(0.0) { }

SampleStruct::SampleStruct(const int a, const double b) : valueOne(a), valueTwo(b) { }

void runZadStruct()
{
    SampleStruct obj1;
    std::cout << "initializing empty struct obj1 (default constructor is called, so...): " << "value 1 = " << obj1.valueOne << ", value 2 = " << std::fixed << std::setprecision(2) << obj1.valueTwo << std::endl;
    obj1.valueOne = 3;
    obj1.valueTwo = -10;
    std::cout << "assigning values to obj1 verbatim: " << "value 1 = " << obj1.valueOne << ", value 2 = " << obj1.valueTwo << "\n" << std::endl;
    const SampleStruct obj2{10, 3.14};
    std::cout << "initializing struct with constructor obj2: " << "value 1 = " << obj2.valueOne << ", value 2 = " << std::fixed << obj2.valueTwo << std::endl;
}
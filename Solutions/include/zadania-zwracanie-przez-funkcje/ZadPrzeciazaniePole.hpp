#pragma once

#include <iostream>

inline void pole() { std::cout << "Area of the function\n" << std::endl; }

int pole(int sideLength);

int pole(int sideLength, int secondSideLength);

double pole(int radius, bool isCircle=true);

void runZadPrzeciazeniePole();



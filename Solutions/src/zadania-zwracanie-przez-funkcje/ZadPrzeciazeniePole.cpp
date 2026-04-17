#include <iostream>
#include <cmath>

int pole(int sideLength) {
    return sideLength * sideLength;
}

int pole(int sideLength, int secondSideLength) {
    return sideLength * secondSideLength;
}

double pole(int radius, bool isCircle=true) {
    if (!isCircle) {
        return radius * radius;
    }
    return pow(radius, 2) * 3.1415;
}

void runZadPrzeciazeniePole() {
    int sideA = 5;
    int sideB = 12;
    std::cout << "Area of square with a side of length " << sideA << ": " << pole(sideA) << std::endl;
}
//
// Created by student on 8.05.2026.
//

#include "../../include/zadania-zwracanie-przez-funkcje/ZadPrzeciazaniePlus.hpp"
#include <iostream>

Punkt::Punkt(const int x, const int y) : x(x), y(y) {}

void Punkt::operator+(const Punkt other) {
    this->x += other.x;
    this->y += other.y;
}

void runZadPrzeciazaniePlus() {
    auto p1 = Punkt(-2, 7);
    const auto p2 = Punkt(4, -4);
    std::cout << "(" << p1.x << ", " << p1.y << ") + (" << p2.x << ", " << p2.y << ") = ";
    p1 + p2;
    std::cout << "(" << p1.x << ", " << p1.y << ")" << std::endl;
}

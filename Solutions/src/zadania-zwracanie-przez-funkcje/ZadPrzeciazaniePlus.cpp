//
// Created by student on 8.05.2026.
//

#include "zadania-zwracanie-przez-funkcje/ZadPrzeciazaniePlus/ZadPrzeciazaniePlus.hpp"

Punkt::Punkt(int x, int y) : x(x), y(y) {}

void Punkt::operator+(Punkt other) {
    x += other.x;
    y += other.y;
}

void runZadPrzeciazaniePlus() {
    //dokończyć
}
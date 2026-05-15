//
// Created by student on 8.05.2026.
//

#pragma once


class Punkt {
    public:
        int x;
        int y;
        Punkt(int x, int y);
        void operator+(Punkt other);
};


void runZadPrzeciazaniePlus();

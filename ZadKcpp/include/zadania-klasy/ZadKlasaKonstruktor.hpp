#pragma once

class Konstruktory {
    int standardInitVariable;
    int listInitVariable;
public:
    Konstruktory();
    Konstruktory(int a, int b);
    ~Konstruktory();
    void printValues() const;
};

void runZadKlasaKonstruktor();
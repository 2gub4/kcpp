#include "zadania-klasy/ZadKlasaKonstruktor.hpp"
#include <iostream>

Konstruktory::Konstruktory() : listInitVariable(0) { standardInitVariable = 0; }

Konstruktory::Konstruktory(const int a, const int b) : listInitVariable(b) { standardInitVariable = a; }

Konstruktory::~Konstruktory() { std::cout << "Object destroyed\n"; }

void Konstruktory::printValues() const {
    std::cout << "default variable initialization: " << standardInitVariable
    << "\nlist variable initialization: " << listInitVariable << "\n";
}

void runZadKlasaKonstruktor() {
    const Konstruktory obj1;
    obj1.printValues();
    const Konstruktory obj2(5, 10);
    obj2.printValues();
}
#include "zadania-klasy/ZadStructKonstruktor.hpp"
#include <iostream>

KonstruktoryStruct::KonstruktoryStruct() : listInitVariable(0) {
    standardInitVariable = 0;
}

KonstruktoryStruct::KonstruktoryStruct(const int a, const int b) : listInitVariable(b) {
    standardInitVariable = a;
}

KonstruktoryStruct::~KonstruktoryStruct() {
    std::cout << "Struct destroyed\n";
}

void KonstruktoryStruct::printValues() const {
    std::cout << "standard variable initialization: " << standardInitVariable << "\nlist variable initialization: " << listInitVariable << "\n";
}

void runZadStructKonstruktor() {
    const KonstruktoryStruct obj1;
    obj1.printValues();
    const KonstruktoryStruct obj2{15, 20};
    obj2.printValues();
}
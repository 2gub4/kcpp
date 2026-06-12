#include "zadania-klasy/ZadPrzyjazn.hpp"
#include <iostream>

ClassA::ClassA() : secretA(100) {
}

void ClassA::showSecretB(const ClassB& b) const {
    std::cout << "\tClassA sees secret variable of ClassB: " << b.secretB << "\n";
}

ClassB::ClassB() : secretB(200) { }

void ClassB::showSecretA(const ClassA& a) const {
    std::cout << "\tClassB sees secret variable of ClassA: " << a.secretA << "\n";
}

void runZadPrzyjazn() {
    std::cout << "Mutual friendship (both classess must be each other's firend class):\n";
    const ClassA a;
    const ClassB b;
    a.showSecretB(b);
    b.showSecretA(a);
}
#include "zadania-klasy/ZadClass.hpp"
#include <iostream>

SampleClass::SampleClass() : privateVariable(100), protectedVariable(100), publicVariable(100)  { }

void SampleClass::definedOutside() {
    publicVariable = 4;
}

void SampleClass::accessProtectedAndPrivate() const {
    std::cout << "Private variable: " << privateVariable << "\n";
    std::cout << "Protected variable: " << protectedVariable << "\n";
}

void runZadClass() {
    SampleClass obj;
    obj.publicInlineFunction();
    obj.definedInside();
    obj.definedOutside();
    obj.accessProtectedAndPrivate();
}
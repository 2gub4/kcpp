//
// Created by student on 27.03.2026.
//

#include "ExampleClass.hpp"

#include <iostream>
#include <ostream>

ExampleClass::ExampleClass(int x, int y, int l, int w) :
xLocation(x),
yLocation(y),
length(l),
width(w)
{ counter++; }

ExampleClass::ExampleClass() { counter++; }

ExampleClass::ExampleClass(int l, int w) :
length(l),
width(w)
{ counter++; }

int ExampleClass::counter = 0;

void ExampleClass::foo(int bar) const {
    std::cout<<"bar + width + length: "<<bar + width + length<<std::endl;
}

ExampleClass::~ExampleClass() { counter--; }

void ExampleClass::returnGlobalCounter() {
   std::cout<<"Global Counter: "<<counter<<std::endl;
}


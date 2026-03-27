#include <iostream>
#include <ostream>

#include "ExampleClass.hpp"


int main() {
    ExampleClass ex(21, 37, 420, 67);
    ex.foo(400);
    ExampleClass ex2;
    ExampleClass ex3;
    ExampleClass ex4;
    ExampleClass ex5;
    ExampleClass ex6;

    std::cout<< ExampleClass::counter <<std::endl;
    ExampleClass::returnGlobalCounter();
    return 0;
}
#include <iostream>

void swap_by_value(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    std::cout << "(inside function swap_by_value) A = " << a << ", B = " << b << std::endl;
}

void swap_by_reference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
    std::cout << "(inside function swap_by_reference) A = " << a << ", B = " << b << std::endl;
}

void swap_by_pointer(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    std::cout << "(inside function swap_by_pointer) A = " << *a << ", B = " << *b << std::endl;
}


void runZadZwracanie() {
    int a = 0;
    int b = 123;
    std::cout << "(initially) A = " << a << ", B = " << b << std::endl;
    swap_by_value(a, b);
    std::cout << "(after function swap_by_value) A = " << a << ", B = " << b << "\n" << std::endl;
    std::cout << "(initially) A = " << a << ", B = " << b << std::endl;
    swap_by_reference(a, b);
    std::cout << "(after function swap_by_reference) A = " << a << ", B = " << b << "\n" << std::endl;
    std::cout << "(initially) A = " << a << ", B = " << b << std::endl;
    int* pointA = &a;
    int* pointB = &b;
    swap_by_pointer(pointA, pointB);
    std::cout << "(after function swap_by_pointer) A = " << a << ", B = " << b << "\n" << std::endl;
    std::cout << "(initially) A = " << a << ", B = " << b << std::endl;
    swap_by_pointer(&a, &b);
    std::cout << "(after function swap_by_pointer with adresses as parameters) A = " << a << ", B = " << b << "\n" << std::endl;
}
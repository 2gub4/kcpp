//
// Created by Jakub on 15.05.2026.
//

#include <iostream>

void zamien(int* a, int* b)
{
    const int temp = *a;
    *a = *b;
    *b = temp;
}

void runZadArytmetykaWskaznokowZamiana()
{
    int a = 123;
    int b = 789;
    int c = 456;
    int d = 101112;
    std::cout<< "Values a: " << a << " and b: " << b << " after swap (zamien function) operation: ";
    zamien(&a, &b);
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout<< "Values c: " << c << " and d: " << d << " after swap (zamien function) operation: ";
    zamien(&c, &d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
}

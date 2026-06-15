//
// Created by Jakub on 24.05.2026.
//

#include <iostream>

#include "zadania-arytmetyka-wskaznikow/displayArray.hpp"

void funkcja1(int* tab)
{
    int* p = tab;
    std::cout << "\tInitial state (p points to first element of the array): *p = " << *p << '\n';
    p++;
    std::cout << "\tp++ --> *p = " << *p << " (pointer moved)\n";
    ++p;
    std::cout << "\t++p --> *p = " << *p << " (pointer moved)\n";
    p = tab;
    std::cout << "\tPointer reset: *p = " << *p << '\n';
    ++*p;
    std::cout << "\t++*p --> *p = " << *p << " (value incremented)\n";
    ++(*p);
    std::cout << "\t++(*p) --> *p = " << *p << " (value incremented)\n";
    p = tab;
    std::cout << "\tPointer reset: *p = " << *p << '\n';
    std::cout << "\t*p++ --> operation's result: " << *p++ << ", post operation: *p = " << *p << '\n';
    p = tab;
    std::cout << "\tPointer reset: *p = " << *p << '\n';
    std::cout << "\t*++p --> operation's result: " << *++p << ", post operation: *p = " << *p << "\n\n";
}

void funkcja2()
{
    int memory[3] = {0, 0, 0};
    int& a = memory[0];
    int& b = memory[1];
    int& c = memory[2];
    int* wsk_int;
    std::cout << "\t1.  A, B, C: " << a << "\t" << b << "\t" << c << std::endl;
    b = 10;
    std::cout << "\t2.  A, B, C: " << a << "\t" << b << "\t" << c << std::endl;
    wsk_int = &c;
    *wsk_int = 20;
    std::cout << "\t3.  A, B, C: " << a << "\t" << b << "\t" << c << std::endl;
    wsk_int = &a;
    *(wsk_int + 1) = 30;
    std::cout << "\t4.  A, B, C: " << a << "\t" << b << "\t" << c << std::endl;
    *(&b - 1) = 40;
    std::cout << "\t5.  A, B, C: " << a << "\t" << b << "\t" << c << std::endl;
    *(&c - 1) = 50;
    std::cout << "\t6.  A, B, C: " << a << "\t" << b << "\t" << c << std::endl;
    *(&a + 2) = 60;
    std::cout << "\t7.  A, B, C: " << a << "\t" << b << "\t" << c << std::endl;
    *(&a + 1) = 70;
    std::cout << "\t8.  A, B, C: " << a << "\t" << b << "\t" << c << std::endl;
    *(&c - 2) = 80;
    std::cout << "\t9.  A, B, C: " << a << "\t" << b << "\t" << c << std::endl;
    *(&c - 1) = 90;
    std::cout << "\t10. A, B, C: " << a << "\t" << b << "\t" << c << std::endl;
}


void runZadArytmetykaWskaznikow()
{
    int tab[5] = {10, 20, 30, 40, 50};
    std::cout << "Given array: " << displayArray(tab, 5) << "\n";
    std::cout << "Results of funckja1() call: \n";
    funkcja1(tab);
    std::cout << "Results of funkcja2() call:\n";
    funkcja2();
}

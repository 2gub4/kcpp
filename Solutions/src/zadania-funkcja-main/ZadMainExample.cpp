#include <iostream>
#include <stdio.h>
#include <string>

const std::string main_separator = std::string(90, '=');
const std::string separator = std::string(90, '-');

void function1() {
    std::cout << "function1 (Standard C++)" << std::endl;
}
int function1(int a) {
    return a;
}
double function1(double a) {
    return a;
}

void function2() {
    std::cout << "function2 (Standard C++)" << std::endl;
}

void function3() {
    std::cout << "function3 (Standard C++)" << std::endl;
}

extern "C" {
    void function4() {
        printf("function4 (extern \"C\" - using printf)\n");
    }
    void function5() {
        printf("function5 (extern \"C\" - using printf)\n");
    }
}

int main(int argc, char *argv[], char *envp[]) {
    std::cout << "\n" << main_separator << "\n" << std::endl;

    std::cout << "Number of arguments (argc): " << argc << "\n" << std::endl;

    for (int i = 1; i < argc; i++) {
        std::string arg = argv[i];
        std::cout << "argv[" << i << "] = '" << arg << "' -> ";
        if (arg.length() == 1) {
            switch (arg[0]) {
                case '1':
                    function1();
                    break;
                case '2':
                    function2();
                    break;
                case '3':
                    function3();
                    break;
                case '4':
                    function4();
                    break;
                case '5':
                    function5();
                    break;
                default:
                    std::cout << "no function bound to a number" << std::endl;
                    break;
            }
        } else {
            std::cout << "not valid argv" << std::endl;
        }
    }

    int envc = 0;
    while (envp[envc] != nullptr) {
        envc++;
    }

    std::cout << "\nNumber of environmental variables [envc]: " << envc << "\n" << std::endl;
    for (int i = 0; i < envc; i++) {
        std::cout << "envp[" << i << "] = " << envp[i] << std::endl;
    }

    std::cout << "\n" << separator << "\n" << std::endl;

    std::cout << "Manual compilation:" << std::endl;
    std::cout << "  g++ -c -std=c++11 -Wall -Wextra -pedantic -o ZadMainExample.o ZadMainExample.cc" << std::endl;
    std::cout << "Disassemble (inspect name mangling):" << std::endl;
    std::cout << "  readelf -s ZadMainExample.o\n" << std::endl;

    std::cout << "Or if using cmake:" << std::endl;
    std::cout << "  readelf -s CMakeFiles/ZadMainExample.dir/ZadMainExample.cc.o\n" << std::endl;

    std::cout << "Unmangle function names:" << std::endl;
    std::cout << "  c++filt _Z9function1v\n" << std::endl;

    std::cout << "Overloaded function1 tests (C++ linkage):" << std::endl;
    std::cout << "function1(1) returns: " << function1(1) << std::endl;
    std::cout << "function1(5.0) returns: " << function1(5.0) << std::endl;

    printf("\nMessage using printf\n");
    std::cout << "\n" << separator << "\n" << std::endl;
    std::cout << "\n" << main_separator << "\n" << std::endl;
    
    return 0;
}
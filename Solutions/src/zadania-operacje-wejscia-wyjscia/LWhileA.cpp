#include <iostream>
#include <windows.h>

void runZadWhileA() {
    SetConsoleOutputCP(CP_UTF8);
    int number;
    int sum = 0;
    int count = 0;
    std::cout << "Wprowadzaj liczby (0 kończy program):\n";
    std::cin >> number;
    while (number != 0) {
        if (number < 0) {
            std::cout << "Wprowadzono liczbę ujemną!\n";
        }
        sum += number;
        count++;
        std::cin >> number;
    }
    std::cout << "Suma wprowadzonych liczb: " << sum << "\n";
    std::cout << "Ilość wprowadzonych liczb: " << count << "\n";
}
/*
Zadanie 4.1
--------------------------------------
Napisz program z przykładami manipulacji strumieniem cout:
- setw, setprecision, setfill, fixed, scientific, hex, dec... etc (patrz plik kcpp02.pdf)
- nazwać program LManipulacjaStrumieniemCout.cc

Spraw aby na ekran wypisało to co jest pomiedzy liniami ze znakami =:

==================================================
Wynik naszego działania: x.xxxxx jest niepoprawny ale:
output: xx.xxx T: x.xxx
output1: x.xxxx T: xx.xxxxx
output2: x.xxxx T: xx.xxxxxx
---------------------------------
average: xx.xxxx T: xx.xxxxxx
==================================================

- x.xxxx są wynikami jakiś działań, a nie sztucznie wstawionymi liczbami
- ustawienie liczb/wypisanie/sformatowanie wykonać używając manipulatorow strumieniem (setw, setprecision, setfill etc), zamiast " " czy \t
*/


#include <iostream>
#include <iomanip>
#include <windows.h>

float performCalculation(const float a, const float b, const char op)
{
    switch (op)
    {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/':
            if (b == 0) { return -1; }
            return a / b;
        default: return -1;
    }
}

float getAverage(const float res1, const float res2, const float res3)
{
    return (res1 + res2 + res3) / 3.0f;
}

void iomanipDemo()
{
    constexpr int integer = 255;
    constexpr double bigDouble = 987654.321;
    std::cout << "Value 255 (dec): " << std::dec << integer << "\n";
    std::cout << "Value 255 (hex): " << std::hex << std::uppercase << integer << std::nouppercase << "\n";
    std::cout << "Value 255 (oct): " << std::oct << integer << "\n";
    std::cout << std::dec;
    std::cout << "Default notation: " << std::defaultfloat << bigDouble << "\n";
    std::cout << "Scientific notation: " << std::scientific << bigDouble << "\n";
    std::cout << "Always with (+ or -): " << std::showpos << 42 << std::noshowpos << "\n\n";
}

void displayResultsTable(const float r1, const float r2, const float r3,
                         const float t1, const float t2, const float t3)
{
    const float avgR = getAverage(r1, r2, r3);
    const float avgT = getAverage(t1, t2, t3);

    std::cout << std::setfill('=') << std::setw(50) << "" << std::setfill(' ') << "\n";
    std::cout << "Wynik naszego działania: " << std::fixed << std::setprecision(5) << r1/10 << " jest niepoprawny ale:\n";

    std::cout << std::left << std::setw(10) << "output:"
              << std::right << std::setw(6) << std::setprecision(3) << r1
              << std::setw(6) << "T:"
              << std::setw(7) << std::setprecision(3) << t1 << "\n";

    std::cout << std::left << std::setw(11) << "output1:"
              << std::right << std::setw(6) << std::setprecision(4) << r2
              << std::setw(5) << "T:"
              << std::setw(9) << std::setprecision(5) << t2 << "\n";

    std::cout << std::left << std::setw(11) << "output2:"
              << std::right << std::setw(6) << std::setprecision(4) << r3
              << std::setw(5) << "T:"
              << std::setw(10) << std::setprecision(6) << t3 << "\n";

    std::cout << std::setfill('-') << std::setw(33) << "" << std::setfill(' ') << "\n";

    std::cout << std::left << std::setw(10) << "average:"
              << std::right << std::setw(7) << std::setprecision(4) << avgR
              << std::setw(5) << "T:"
              << std::setw(10) << std::setprecision(6) << avgT << "\n";

    std::cout << std::setfill('=') << std::setw(50) << "" << std::setfill(' ') << "\n";
}

void runLManipulacjaStrumieniemCout()
{
    SetConsoleOutputCP(CP_UTF8);
    constexpr float pi = 3.14159265358979323846f;
    constexpr float k = 2.718281828453f;
    constexpr float rand = 32347.1293343f;

    const float res1 = performCalculation(rand, 2000, '/');
    const float res2 = performCalculation(pi, 2.5f, '*');
    const float res3 = performCalculation(k, 3.0f, '*');

    const float t1 = performCalculation(k, 1.5f, '*');
    const float t2 = performCalculation(pi, 10.0f, '*');
    const float t3 = performCalculation(rand, 1000, '/');

    std::cout << "iomanip demo:\n";
    iomanipDemo();
    std::cout << "Formatting result:\n";
    displayResultsTable(res1, res2, res3, t1, t2, t3);
}
#include <iostream>

void runZadAdresowaniePamieci()
{
    constexpr int zmienna1 = 15;
    constexpr int zmienna2 = 17;
    constexpr int zmienna3 = 19;
    constexpr long zmienna4 = 987123;
    constexpr long zmienna5 = 456321;
    constexpr long zmienna6 = 678345;
    std::cout << "Variables of type int: ";
    std::cout << "\n\t- memory address of variable zmienna1: " << &zmienna1;
    std::cout << "\n\t- memory address of variable zmienna2: " << &zmienna2;
    std::cout << "\n\t- memory address of variable zmienna3: " << &zmienna3;

    std::cout << "\n\nVariables of type long: ";
    std::cout << "\n\t- memory address of variable zmienna4: " << &zmienna4;
    std::cout << "\n\t- memory address of variable zmienna5: " << &zmienna5;
    std::cout << "\n\t- memory address of variable zmienna6: " << &zmienna6;

    /*
     * Adresy wypisane w konsoli (w systemie szesnastkowym) wskazują na to iż indeksy pamięci są uporządkowane malejąco,
     * co jest charakterystyczne dla komputerów w architekturze x86_x64
     * W przypadku zmiennych typu int napotykamy różnicę 4 bitów w dół z każdką kolejną zmienną na stosie, co wskazuje na domyślny rozmiar takiej zmiennej.
     */
}
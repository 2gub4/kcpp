#include "zadania-klasy/ZadUnia.hpp"
#include <iostream>

void runZadUnia() {
    UnionExample unia{};
    unia.intValue = 65;
    std::cout << "Integer: " << unia.intValue << "\n";
    unia.doubleValue = 3.1415;
    std::cout << "Floating point number: " << unia.doubleValue << "\n";
    std::cout << "Trying to read value of intValue after assigning double variable (doubleValue): " << unia.intValue << "\n";
    /*
     * Wyjaśnienie:
     *  rozmiar unii jest zawsze rozmiarem jej największego elementu - w przypadku powyższej jest to 8 bajtów odpowiadające double, a
     *  sama pamięć jest współdzielona przez zmienne. Jeśli postanowimy zmienić jakąś wartość unii po zapisanym uprzednio 65,
     *  nadpisujemy całość narzucając nowy typ. Próbując dostać się teraz do zmiennej intowej napotykamu w pamięci double
     *  o wartości 3.1415, który przez kolizję typów w konsoli wypisze ilość bajtów przeznaczoną dla inta (4), ale przez tą kolizję
     *  liczba nie zostanie poprawnie zinterpretowana i otrzymamy dużą "losową" wartość
     */
}
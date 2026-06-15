#include <iostream>
#include <ctime>
#include <windows.h>

void runZadGra() {
    SetConsoleOutputCP(CP_UTF8);
    srand(time(nullptr));
    int maxRange = 100;
    int difficulty;
    std::cout << "Wybierz poziom trudności (1 - Łatwy [1-50], 2 - Trudny [1-200]): ";
    std::cin >> difficulty;
    if (difficulty == 1) {
        maxRange = 50;
    } else if (difficulty == 2) {
        maxRange = 200;
    }
    const int drawnNumber = rand() % maxRange + 1;
    int attempt;
    int count = 0;
    bool guessed = false;
    std::cout << "Zgadnij liczbę (1-" << maxRange << "):\n";
    while (count < 10) {
        std::cin >> attempt;
        count++;
        if (attempt < drawnNumber) {
            std::cout << "Za mało! Próbuj dalej.\n";
        } else if (attempt > drawnNumber) {
            std::cout << "Za dużo! Próbuj dalej.\n";
        } else {
            std::cout << "Brawo! Zgadłeś w " << count << " próbach.\n";
            guessed = true;
            break;
        }
    }
    if (!guessed) {
        std::cout << "Koniec prób! Prawidłowa liczba to: " << drawnNumber << "\n";
    }
}
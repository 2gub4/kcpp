#include "zadania-klasy/ZadMetodyAbstrakcyjne.hpp"
#include <iostream>
#include <cmath>
#include <windows.h>

Kwadrat::Kwadrat(const double a) : bok(a) { }

void Kwadrat::narysuj() { std::cout << "Przepis na narysowanie kwadratu" << std::endl; }

double Kwadrat::obliczObwod() { return 4 * bok; }

double Kwadrat::obliczPole() { return bok * bok; }

Trojkat::Trojkat(const double a, const double b, const double c, const double h) : bokA(a), bokB(b), bokC(c), wysokosc(h) { }

void Trojkat::narysuj() { std::cout << "Przepis na narysowanie trojkata" << std::endl; }

double Trojkat::obliczObwod() { return bokA + bokB + bokC; }

double Trojkat::obliczPole() { return (bokA * wysokosc) / 2.0; }

Prostokat::Prostokat(const double w, const double h) : szerokosc(w), wysokosc(h) { }

void Prostokat::narysuj() { std::cout << "Przepis na narysowanie prostokata" << std::endl; }

double Prostokat::obliczObwod() { return 2 * (szerokosc + wysokosc); }

double Prostokat::obliczPole() { return szerokosc * wysokosc; }

Kolo::Kolo(const double r) : promien(r) { }

void Kolo::narysuj() { std::cout << "Przepis na narysowanie kola" << std::endl; }

double Kolo::obliczObwod() { return 2 * 3.14159265359 * promien; }

double Kolo::obliczPole() { return 3.14159265359 * promien * promien; }

double Kolo::dystans(const double metryKwadratowe) { return std::sqrt(metryKwadratowe / 3.14159265359); }

void runZadMetodyAbstrakcyjne() {
    SetConsoleOutputCP(CP_UTF8);
    Figura* figury[4];
    figury[0] = new Kwadrat(4.0);
    figury[1] = new Trojkat(3.0, 4.0, 5.0, 4.0);
    figury[2] = new Prostokat(4.0, 5.0);
    figury[3] = new Kolo(5.0);

    for (int i = 0; i < 4; ++i) {
        figury[i]->narysuj();
        std::cout << "Obwód: " << figury[i]->obliczObwod() << ", Pole: " << figury[i]->obliczPole() << "\n";
    }
    const Kolo* koloPointer = dynamic_cast<Kolo*>(figury[3]);
    if (koloPointer != nullptr) {
        constexpr double x = 4.0;
        std::cout << "Wymagany promien dla " << x << " m2 wynosi: " << Kolo::dystans(x) << " m\n";
    }
    for (int i = 0; i < 4; ++i) { delete figury[i]; }
}
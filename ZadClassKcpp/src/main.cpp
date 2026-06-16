#include <windows.h>
#include <iostream>
#include <string>
#include <vector>

#include "includes.hpp"
#include "Section.hpp"
#include "Exercise.hpp"

const auto main_separator = std::string(100, '=');
const auto separator = std::string(100, '-');
const auto hash_separator = std::string(100, '#');

void printAvailableSections(const std::vector<Section*>& sections)
{
    std::cout << "Dostępne sekcje: \n";
    for (const auto& section : sections)
    {
        std::cout << " [" << section->getNumber() << "] - " << section->getSectionName() << "\n";
    }
    std::cout << "\n [0] - Zakończ." << std::endl;
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    auto zadaniaMain = Section(1, "Zadania Funkcja Main",
        "Zadania poświęcone funkcji main i fundamentom języka C++."
    );
    zadaniaMain.addExercise(
        Exercise(
            1,
            "ZadEnumExample.cc",
            runZadEnumExample,
            "Zastosowanie typów wyliczeniowych enum (scoped i unscoped)."
        )
    );
    zadaniaMain.addExercise(
        Exercise(
            2,
            "ZadClassExample.cc",
            runZadClassExample,
            "Podstawy tworzenia klas, metod i obiektów w obrębie jednego pliku."
        )
    );
    zadaniaMain.addExercise(
        Exercise(
            3,
            "ZadCharExample.cc",
            runZadCharExample,
            "Operacje na łańcuchach znaków w stylu C przy użyciu biblioteki <cstring>."
        )
    );
    zadaniaMain.addExercise(
        Exercise(
            4,
            "ZadStringExample.cc",
            runStringFunctionsExample,
            "Manipulacja tekstem z wykorzystaniem metod klasy std::string."
        )
    );
    zadaniaMain.addExercise(
        Exercise(
            5,
            "ZadMainExample.cc",
            nullptr,
            "Parsowanie argumentów linii poleceń (argc, argv) i łączenie z kodem C (extern \"C\")."
        )
    );
    auto zadaniaFunkcje = Section(2, "Zadania Zwracanie Przez Funkcje",
        "Zadania poświęcone funkcjom, ich charakterystykom i sposobom zwracania wartości.",
        5
    );
    zadaniaFunkcje.addExercise(
        Exercise(
            1,
            "ZadZwracanie.cc",
            runZadZwracanie,
            "Zwracanie wartości z funkcji przez wartość, referencję, wskaźnik."
        )
    );
    zadaniaFunkcje.addExercise(
        Exercise(
            2,
            "ZadPrzeciazaniePole.cc",
            runZadPrzeciazeniePole,
            "Przeciążanie funkcji na przykładzie obliczania pola figur."
        )
    );
    zadaniaFunkcje.addExercise(
        Exercise(
            3,
            "ZadPrzeciazanieDodaj.cc",
            runZadPrzeciazenieDodaj,
            "Przeciążanie funkcji dla argumentów różnych typów (int, float, std::string)."
        )
    );
    zadaniaFunkcje.addExercise(
        Exercise(
            4,
            "ZadPrzeciazaniePlus.cc",
            runZadPrzeciazaniePlus,
            "Przeciążanie operatorów arytmetycznych (operator+) dla klas własnych."
        )
    );
    zadaniaFunkcje.addExercise(
        Exercise(
            5,
            "LPrzeciazaniePotega.cc",
            runLPrzeciazaniePotega,
            "Przeciążanie logiki matematycznej dla typów całkowitych i zmiennoprzecinkowych."
        )
    );
    auto zadaniaWskazniki = Section(3, "Zadania Arytmetyka Wskaźników",
        "Zadania poświęcone wskaźnikom, pokazujące do czego służą, jakie są ich rodzaje i "
        "jak wykorzystywać je w praktyce (szczególnie na przykładach z tablicami)",
        13
    );
    zadaniaWskazniki.addExercise(
        Exercise(
            1,
            "ZadArytmetykaWskaznikowZamiana.cc",
            runZadArytmetykaWskaznokowZamiana,
            "Modyfikacja pamięci i zamiana wartości zmiennych z użyciem wskaźników."
        )
    );
    zadaniaWskazniki.addExercise(
        Exercise(
            2,
            "ZadArytmetykaWskaznikowSuma.cc",
            runZadArytmetykaWskaznikowSuma,
            "Iteracja i sumowanie elementów tablicy przy użyciu arytmetyki wskaźników."
        )
    );
    zadaniaWskazniki.addExercise(
        Exercise(
            3,
            "ZadArytmetykaWskaznikowZnajdowanie.cc",
            runZadArytmetykaWskaznikowZnajdowanie,
            "Wyszukiwanie ekstremów w tablicy poprzez operacje na wskaźnikach."
        )
    );
    zadaniaWskazniki.addExercise(
        Exercise(
            4,
            "ZadArytmetykaWskaznikowPrzesuniecie.cc",
            runZadArytmetykaWskaznikowPrzesuniecie,
            "Cykliczne przesuwanie elementów tablicy operując wskaźnikami."
        )
    );
    zadaniaWskazniki.addExercise(
        Exercise(
            5,
            "ZadArytmetykaWskaznikowRoznica.cc",
            runZadArytmetykaWskaznikowRoznica,
            "Obliczanie odległości pamięciowej (różnicy) między adresami wewnątrz tablicy."
        )
    );
    zadaniaWskazniki.addExercise(
        Exercise(
            6,
            "ZadArytmetykaWskaznikowKopiowanie.cc",
            runZadArytmetykaWskaznikowKopiowanie,
            "Bezpośrednie kopiowanie bloków pamięci z pominięciem operatora indeksowania."
        )
    );
    zadaniaWskazniki.addExercise(
        Exercise(
            7,
            "ZadAdresowaniePamieci.cc",
            runZadAdresowaniePamieci,
            "Analiza układu zmiennych na stosie (stack) i kierunku adresowania pamięci."
        )
    );
    zadaniaWskazniki.addExercise(
        Exercise(
            8,
            "ZadArytmetykaWskaznikowTabliceA.cc",
            runZadArytmetykaWskaznikowTabliceA,
            "Złożone operacje na buforach (suma, max, inwersja) z użyciem samych wskaźników."
        )
    );
    zadaniaWskazniki.addExercise(
        Exercise(
            9,
            "ZadArytmetykaWskaznikowTabliceB.cc",
            runZadArytmetykaWskaznikowTabliceB,
            "Korelacja i operacje matematyczne pomiędzy wieloma tablicami za pomocą wskaźników."
        )
    );
    zadaniaWskazniki.addExercise(
        Exercise(
            10,
            "ZadArytmetykaWskaznikowTablica2D.cc",
            runZadArytmetykaWskaznikowTablica2D,
            "Ciągłość pamięci i mechanizm mapowania adresów w tablicach dwuwymiarowych."
        )
    );
    zadaniaWskazniki.addExercise(
        Exercise(
            11,
            "ZadArytmetykaWskaznikow.cc",
            runZadArytmetykaWskaznikow,
            "Złożone operatory wyłuskania i inkrementacji (*p++, *++p) względem wskaźników."
        )
    );
    zadaniaWskazniki.addExercise(
        Exercise(
            12,
            "ZadOperatoryPrzypisania.cc",
            runZadOperatoryPzypisania,
            "Zestawienie podstawowych operatorów arytmetycznych z operatorami przypisania."
        )
    );
    zadaniaWskazniki.addExercise(
        Exercise(
            15,
            "LBitoweOperatoryLogiczneSingleVariable.cc",
            runLBitoweOperatoryLogiczneSingleVariable,
            "Przesunięcia bitowe i operacje logiczne przy konwersji ciągów binarnych."
        )
    );
    auto zadaniaIO = Section(4, "Zadania IO", "Zadania poświęcone "
        "wprowadzaniu danych i wyświetlaniu ich w konsoli, głównie z użyciem bibliotek iostream, iomanio oraz sstream"
        " celem nauki formatowania strumieni wejścia i wyjścia.",
        18
    );
    zadaniaIO.addExercise(
        Exercise(
            1,
            "LStringStream.cc",
            runLStringStream,
            "Formatowanie i parsowanie danych za pomocą strumieni buforowych std::stringstream."
        )
    );
    zadaniaIO.addExercise(
        Exercise(
            2,
            "LManipulacjaStrumieniemCout.cc",
            runLManipulacjaStrumieniemCout,
            "Zaawansowane formatowanie wyjścia konsoli za pomocą manipulatorów z <iomanip>."
        )
    );
    zadaniaIO.addExercise(
        Exercise(
            3,
            "ZadCinCoutFile.cc",
            runZadCinCoutFile,
            "Zarządzanie standardowymi strumieniami (cout, cin) oraz strumieniem błędów (cerr)."
        )
    );
    zadaniaIO.addExercise(
        Exercise(
            4,
            "ZadCandCPP.cc",
            runZadCandCPP,
            "Porównanie biblioteki stdio (printf/scanf) z iostream (cout/cin)."
        )
    );
    zadaniaIO.addExercise(
        Exercise(
            5,
            "ZadTabelaFormat.cc",
            runZadTabelaFormat,
            "Rysowanie wyjustowanych tabel tekstowych z kontrolą wyrównania i precyzji."
        )
    );
    zadaniaIO.addExercise(
        Exercise(
            6,
            "ZadTemperaturaFormat.cc",
            runZadTemperaturaFormat,
            "Generowanie sformatowanych zestawień liczbowych z odpowiednim wyrównaniem do znaków."
        )
    );
    zadaniaIO.addExercise(
        Exercise(
            7,
            "ZadDaneNaukoweFormat.cc",
            runZadDaneNaukoweFormat,
            "Prezentacja wartości zmiennoprzecinkowych w notacji fixed i scientific."
        )
    );
    zadaniaIO.addExercise(
        Exercise(
            8,
            "ZadParzysta.cc",
            runZadParzysta,
            "Rozwiązywanie problemów logicznych algorytmami modulo, bitowymi (&) i operatorem ternarnym."
        )
    );
    zadaniaIO.addExercise(
        Exercise(
            9,
            "ZadParzystaCase.cc",
            runZadParzystaCase,
            "Zarządzanie przepływem sterowania (control flow) za pomocą instrukcji switch."
        )
    );
    zadaniaIO.addExercise(
        Exercise(
            10,
            "ZadPetle.cc",
            runZadPetle,
            "Mechanika pętli iteracyjnych (while, do-while, for) i skoków (break, continue)."
        )
    );
    zadaniaIO.addExercise(
        Exercise(
            11,
            "ZadSwitch.cc",
            runZadSwitch,
            "Obsługa instrukcji switch w połączeniu ze scoped enum jako alternatywa dla łańcuchów znaków."
        )
    );
    zadaniaIO.addExercise(
        Exercise(
            12,
            "ZadForA.cc",
            runZadForA,
            "Filtrowanie wielokrotności i iteracja warunkowa po ciągach liczbowych."
        )
    );
    zadaniaIO.addExercise(
        Exercise(
            13,
            "LSilnia.cc",
            runZadSilnia,
            "Implementacja algorytmów iteracyjnych (silnia) wraz z walidacją wejścia."
        )
    );
    zadaniaIO.addExercise(
        Exercise(
            14,
            "LKsztalt.cc",
            runZadKsztalt,
            "Rysowanie wzorów 2D w konsoli przy użyciu zagnieżdżonych struktur pętli."
        )
    );
    zadaniaIO.addExercise(
        Exercise(
            15,
            "LWhileA.cc",
            runZadWhileA,
            "Utrzymywanie strumienia wejścia z warunkiem wyjścia (sentinel loop) i licznikami."
        )
    );
    zadaniaIO.addExercise(
        Exercise(
            16,
            "LGra.cc",
            runZadGra,
            "Logika gry stanowej ograniczona próbami i mechaniką feedbacku z wejścia."
        )
    );
    zadaniaIO.addExercise(
        Exercise(
            17,
            "ZadStudent.cc",
            runZadStudent,
            "Obsługa dynamicznych kontenerów std::vector i algorytmów na własnych strukturach danych."
        )
    );
    zadaniaIO.addExercise(
        Exercise(
            18,
            "ZadPreprocesor.cc",
            runZadPreprocesor,
            "Sterowanie procesem kompilacji za pomocą dyrektyw preprocesora (#define, #ifdef)."
        )
    );
    auto zadaniaKlasy = Section(5, "Zadania Klasy", "Zadania poświęcone "
        "pracy z klasami i ich odmianami, czyli 'union' i 'struct', dotykające tematyki programowania obiektowego, a "
        " w tym dziedziczenia, polimorfizmu i hermetyczności.",
        6
    );
    zadaniaKlasy.addExercise(
        Exercise(
            1,
            "ZadClass.cc",
            runZadClass,
            "Enkapsulacja, specyfikatory dostępu (public/private/protected) i deklaracja metod inline."
        )
    );
    zadaniaKlasy.addExercise(
        Exercise(
            2,
            "ZadStruct.cc",
            runZadStruct,
            "Budowa, inicjalizacja i podstawowe zastosowanie struktur w języku C++."
        )
    );
    zadaniaKlasy.addExercise(
        Exercise(
            3,
            "ZadUnia.cc",
            runZadUnia,
            "Współdzielenie pojedynczego obszaru pamięci przez różne typy danych za pomocą unii."
        )
    );
    zadaniaKlasy.addExercise(
        Exercise(
            4,
            "ZadKlasaKonstruktor.cc",
            runZadKlasaKonstruktor,
            "Cykl życia obiektu: konstruktory domyślne, parametryczne oraz listy inicjalizacyjne."
        )
    );
    zadaniaKlasy.addExercise(
        Exercise(
            5,
            "ZadStructKonstruktor.cc",
            runZadStructKonstruktor,
            "Rozszerzanie możliwości standardowych struktur o dedykowane konstruktory."
        )
    );
    zadaniaKlasy.addExercise(
        Exercise(
            6,
            "ZadPrzyjazn.cc",
            runZadPrzyjazn,
            "Asymetryczne otwieranie dostępu do składowych prywatnych poprzez mechanizm friend class."
        )
    );
    zadaniaKlasy.addExercise(
        Exercise(
            7,
            "ZadMetodyAbstrakcyjne.cc",
            runZadMetodyAbstrakcyjne,
            "Projektowanie interfejsów (klasy abstrakcyjne), czysto wirtualne metody i późne wiązanie (polimorfizm)."
        )
    );

    const std::vector sections{ &zadaniaMain, &zadaniaFunkcje, &zadaniaWskazniki, &zadaniaIO, &zadaniaKlasy };

    //Testowe printy dla każdego zadania wg każdej sekcji

    //SEKCJA 1
    // std::cout << "\n" << main_separator << "\n" << std::endl;
    // zadaniaMain.execute();
    // std::cout << "\n" << main_separator << "\n" << std::endl;
    // for (const auto& ex : zadaniaMain.exercises)
    // {
    //     ex.execute();
    //     std::cout << "\n" << separator << "\n" << std::endl;
    // }
    // std::cout << "\n" << main_separator << "\n" << std::endl;

    //std::cout <<  hash_separator << "\n" << std::endl;

    //SEKCJA 2
    // std::cout << "\n" << main_separator << "\n" << std::endl;
    // zadaniaFunkcje.execute();
    // std::cout << "\n" << main_separator << "\n" << std::endl;
    // for (const auto& ex : zadaniaFunkcje.exercises)
    // {
    //     ex.execute();
    //     std::cout << "\n" << separator << "\n" << std::endl;
    // }
    // std::cout << "\n" << main_separator << "\n" << std::endl;

    //std::cout <<  hash_separator << "\n" << std::endl;

    //SEKCJA 3
    // std::cout << "\n" << main_separator << "\n" << std::endl;
    // zadaniaWskazniki.execute();
    // std::cout << "\n" << main_separator << "\n" << std::endl;
    // for (const auto& ex : zadaniaWskazniki.exercises)
    // {
    //     ex.execute();
    //     std::cout << "\n" << separator << "\n" << std::endl;
    // }
    // std::cout << "\n" << main_separator << "\n" << std::endl;
    //
    // std::cout <<  hash_separator << "\n" << std::endl;

    //SEKCJA 4
    // std::cout << "\n" << main_separator << "\n" << std::endl;
    // zadaniaIO.execute();
    // std::cout << "\n" << main_separator << "\n" << std::endl;
    // for (const auto& ex : zadaniaIO.exercises)
    // {
    //     ex.execute();
    //     std::cout << "\n" << separator << "\n" << std::endl;
    // }
    // std::cout << "\n" << main_separator << "\n" << std::endl;

    //std::cout <<  hash_separator << "\n" << std::endl;

    //SEKCJA 5
    // std::cout << "\n" << main_separator << "\n" << std::endl;
    // zadaniaKlasy.execute();
    // std::cout << "\n" << main_separator << "\n" << std::endl;
    // for (const auto& ex : zadaniaKlasy.exercises)
    // {
    //     ex.execute();
    //     std::cout << "\n" << separator << "\n" << std::endl;
    // }
    // std::cout << "\n" << main_separator << "\n" << std::endl;
    //
    // std::cout <<  hash_separator << "\n" << std::endl;

    //mainInterfaceLoop();

    int choice;
    do {
        printAvailableSections(sections);
        std::cout << "Wybierz numer sekcji zadań lub zakończ: ";
        std::cin >> choice;
        Section* targetSection;
        switch (choice)
        {
        case 0:
            targetSection = nullptr;
            break;
        case 1:
            targetSection = &zadaniaMain;
            break;
        case 2:
            targetSection = &zadaniaFunkcje;
            break;
        case 3:
            targetSection = &zadaniaWskazniki;
            break;
        case 4:
            targetSection = &zadaniaIO;
            break;
        case 5:
            targetSection = &zadaniaKlasy;
            break;
        default:
            targetSection = nullptr;
            std::cout << "Nie ma sekcji o takim numerze" << std::endl;
            break;
        }
        if (targetSection != nullptr)
        {
            int exchoice;
            Exercise* targetExercise;
            do {
                targetSection->execute();
                std::cout << "Liczba zadań w sekcji docelowej: " << targetSection->numberOfExercises << std::endl;
                std::cout << "Wybierz numer zadania spośród dostępnych lub porwróć do wyboru sekcji: ";
                std::cin >> exchoice;
                std::cout << std::endl;
                if (exchoice > targetSection->numberOfExercises)
                {
                    targetSection = nullptr;
                    std::cout << "Nie ma zadania o takim numerze" << std::endl;
                }
                else if (targetExercise)
                {
                    std::cout << separator << "\n";
                    targetExercise = &targetSection->exercises.at(exchoice - 1);
                    targetExercise->execute();
                    std::cout << separator << std::endl;
                }
                else break;
            } while (exchoice != 0);
        }
    }
    while (choice != 0);
    std::cout << "Zakończono działanie programu." << std::endl;
    return 0;
}
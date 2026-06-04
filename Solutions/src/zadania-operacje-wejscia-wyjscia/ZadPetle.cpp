#include <iostream>
#include <string>
#include <windows.h>
void whileIncrement(const std::string& incrementType) {
    int i = 0;
    while (i < 11) {
        if (i == 7) {
            std::cout << "\t" << i << " - Szczęśliwa siódemka!" << std::endl;
            if (incrementType == "i++") {
                i++;
            } else {
                ++i;
            }
            continue;
        }
        if (i == 10) {
            std::cout << "\t" << i << " = Koniec iteracji!" << std::endl;
            break;
        }
        std::cout << "\t" << i << std::endl;
        if (incrementType == "i++") {
            i++;
        } else {
            ++i;
        }
    }
}
void doWhileIncrement(const std::string& incrementType) {
    int i = 0;
    do {
        if (i == 7) {
            std::cout << "\t" << i << " - Szczęśliwa siódemka!" << std::endl;
            if (incrementType == "i++") {
                i++;
            } else {
                ++i;
            }
            continue;
        }
        if (i == 10) {
            std::cout << "\t" << i << " = Koniec iteracji!" << std::endl;
            break;
        }
        std::cout << "\t" << i << std::endl;
        if (incrementType == "i++") {
            i++;
        } else {
            ++i;
        }
    } while (i < 11);
}
void forIncrement() {
    for (int i = 0; i < 11; i++) {
        if (i == 10) {
            std::cout << "\t" << i << " = Koniec iteracji!" << std::endl;
            break;
        }
        if (i == 7) {
            std::cout << "\t" << i << " - Szczęśliwa siódemka!" << std::endl;
            continue;
        }
        std::cout << "\t" << i << std::endl;
    }
}
void runZadPetle() {
    SetConsoleOutputCP(CP_UTF8);
    std::cout << "While with 'i++' incrementation:\n";
    whileIncrement("i++");
    std::cout << std::endl;
    std::cout << "While with '++i' incrementation:\n";
    whileIncrement("++i");
    std::cout << std::endl;
    std::cout << "Do while with 'i++' incrementation:\n";
    doWhileIncrement("i++");
    std::cout << std::endl;
    std::cout << "Do while with '++i' incrementation:\n";
    doWhileIncrement("++i");
    std::cout << std::endl;
    std::cout << "For loop:\n";
    forIncrement();
}
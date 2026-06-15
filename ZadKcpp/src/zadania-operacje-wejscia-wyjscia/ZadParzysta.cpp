#include <iostream>

bool isEvenBitwise(const int number) {
    // 5 w systemie binarnym to 0101. 5 & 1 (0001) zwraca 0001, czyli true . Odwracamy przyrównując do 0.
    // 4 w systemie binarnym to 0100. 4 & 1 zwraca 0000, czyli false.                   - || -
    return (number & 1) == 0;
}

bool isEvenModulo(const int number) {
    return (number % 2) == 0;
}

bool isEvenTernary(const int number) {
    // z tego co widzę w moim środowisku to zupełnie ignorowany jest operator ternarny
    // (wyszarzone jest wszystko za warunkiem w nawiasie)
    // i funkcja zwraca tak jak isEvenBitwise, ale nie mam na to wpływu
    return (number % 2 == 0) ? true : false;
}

void runZadParzysta() {
    std::cout << "4 is even (Bitwise): " << isEvenBitwise(4) << "\n";
    std::cout << "5 is even (Modulo): " << isEvenModulo(5) << "\n";
    std::cout << "6 is even (Ternary): " << isEvenTernary(6) << "\n";
}
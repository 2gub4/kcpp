#include <iostream>
#include <string>

#include "zadania-funkcja-main/ZadEnumExample.hpp"

/*
Zadanie 1.0
--------------------------------------
Napisać krótki program oparty na pliku LTypeEnumerated.cc, zawierający przykład użycia typu enum (scoped lub unscoped, z miesiącami)
- nazwać program: ZadEnumExample.cc
*/

enum class ScopedMonths {
    January = 1,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December
};

enum UnscopedMonths : int {
    January = 1,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December
};

enum Names : char {
    Alice = 'a',
    Bob,
    Charles,
    Dan,
    Emily,
    Jakub = 'j'
};


std::string enumToString(ScopedMonths month) {
    switch(month) {
        case ScopedMonths::January:
            return "January";
        case ScopedMonths::February:
            return "February";
        case ScopedMonths::March:
            return "March";
        case ScopedMonths::April:
            return "April";
        case ScopedMonths::May:
            return "May";
        case ScopedMonths::June:
            return "June";
        case ScopedMonths::July:
            return "July";
        case ScopedMonths::August:
            return "August";
        case ScopedMonths::September:
            return "September";
        case ScopedMonths::October:
            return "October";
        case ScopedMonths::November:
            return "November";
        case ScopedMonths::December:
            return "December";
        default:
            return "no such month";
    }
}

std::string enumToString(UnscopedMonths month) {
    switch(month) {
        case January:
            return "January";
        case February:
            return "February";
        case March:
            return "March";
        case April:
            return "April";
        case May:
            return "May";
        case June:
            return "June";
        case July:
            return "July";
        case August:
            return "August";
        case September:
            return "September";
        case October:
            return "October";
        case November:
            return "November";
        case December:
            return "December";
        default:
            return "no such month";
    }
}

std::string enumToString(Names n) {
    switch (n) {
        case Alice:
            return "Alice";
        case Bob:
            return "Bob";
        case Charles:
            return "Charles";
        case Dan:
            return "Dan";
        case Emily:
            return "Emily";
        case Jakub:
            return "Jakub";
        default:
            return "no such name defined";
    }
}

void runZadEnumExample() {
    ScopedMonths my_birthmonth = ScopedMonths::August;
    UnscopedMonths random_unscoped_month = May;
    Names my_name = Jakub;
    std::cout << "(scoped enum example) my_birthmonth: " << static_cast<int>(my_birthmonth) << " = " << enumToString(my_birthmonth) << std::endl;
    std::cout << "(unscoped enum example) random_unscoped_month: " << random_unscoped_month << " = " << enumToString(random_unscoped_month) << std::endl;
    std::cout << "(unscoped enum example with char value): my_name: " << my_name << " (" << static_cast<int>(my_name) << ")" << " = " << enumToString(my_name) << std::endl;
    std::cout << "(unscoped char enum without manually set value) Charles: " << Charles << " (" << static_cast<int>(Charles) << ")" << std::endl;
}
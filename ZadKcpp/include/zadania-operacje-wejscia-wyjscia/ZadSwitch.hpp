#pragma once

#include <string>

enum class IsEvenMethodChoice {
    Bitwise,
    Modulo,
    Ternary,
    Undefined
};

IsEvenMethodChoice selectMethod(const std::string& input);

void runZadSwitch();
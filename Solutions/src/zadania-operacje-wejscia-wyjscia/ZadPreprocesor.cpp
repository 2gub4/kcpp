#include <iostream>
#include <string>

#define ENABLE_FEATURE
#define SQUARE(x) ((x) * (x))
#define STR(x) #x
#define CONCAT(x, y) x##y

inline int squareWithoutMacro(const int x) {
    return x * x;
}

inline std::string stringizeWithoutMacro(const int x) {
    return std::to_string(x);
}

inline int concatWithoutMacro(const int x, const int y) {
    return std::stoi(std::to_string(x) + std::to_string(y));
}

void useMacros() {
    std::cout << "Using preprocessor:\n";
#ifdef ENABLE_FEATURE
    std::cout << "Feature is enabled.\n";
#else
    std::cout << "Feature is disabled.\n";
#endif
    constexpr int value = 5;
    std::cout << "Square of " << value << ": " << SQUARE(value) << "\n";
    std::cout << "Stringification: " << STR(Test String) << "\n";
    int CONCAT(variable, 1) = 100;
    std::cout << "Concatenation (variable1): " << variable1 << "\n";
}

void useWithoutMacros() {
    std::cout << "Without preprocessor (Modern C++ style):\n";
    constexpr bool isFeatureEnabled = true;
    if (isFeatureEnabled) {
        std::cout << "Feature is enabled.\n";
    } else {
        std::cout << "Feature is disabled.\n";
    }
    constexpr int value = 5;
    std::cout << "Square of " << value << ": " << squareWithoutMacro(value) << "\n";
    std::cout << "Stringification: " << stringizeWithoutMacro(value) << "\n";
    const int variable1 = concatWithoutMacro(10, 0);
    std::cout << "Concatenation: " << variable1 << "\n";
}

void runZadPreprocesor() {
    useMacros();
    std::cout << "\n";
    useWithoutMacros();
}
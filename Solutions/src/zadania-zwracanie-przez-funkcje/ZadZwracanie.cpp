#include <iostream>
#include "zadania-zwracanie-przez-funkcje/ZadZwracanie.hpp"

int return_by_value() {
    constexpr int value = 10;
    return value;
}

int& return_by_reference() {
    static int value = 20;
    return value;
}

int* return_by_pointer() {
    static int value = 30;
    return &value;
}

int* return_array() {
    static int arr[6] = {10, 20, 30, 40, 50, 60};
    return arr;
}

void runZadZwracanie() {
    int val = 0;
    std::cout << "(initially) val = " << val;
    val = return_by_value();
    std::cout << "\n(after function return_by_value) val = " << val << "\n";
    std::cout << "(initially) return_by_reference() = " << return_by_reference() << "\n";
    int& ref = return_by_reference();
    ref = 999;
    std::cout << "(after function return_by_reference and modifying reference) return_by_reference() = " << return_by_reference() << "\n";
    const int* ptr = nullptr;
    std::cout << "(initially) ptr address = " << ptr << "\n";
    ptr = return_by_pointer();
    std::cout << "(after function return_by_pointer) ptr value = " << *ptr << " (address: " << ptr << ")\n";
    const int* arr = nullptr;
    std::cout << "(initially) arr address = " << arr << "\n";
    arr = return_array();
    std::cout << "(after function return_array) arr[0] = " << arr[0] << ", arr[1] = " << arr[1] << ", arr[2] = " << arr[2] << std::endl;
}
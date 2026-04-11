#include <iostream>
#include <string>

#include "zadania-w-trakcie-zajec/ZadStringExample.hpp"

std::pair<std::size_t, std::size_t> length_and_size(const std::string &str) {
    return {str.length(), str.size()};
}

char element_at(const std::string &str, std::size_t index) {
    return str.at(index);
}

void clear_str(std::string &str) {
    str.clear();
}

void erase_from_str(std::string &str, char to_be_erased) {
    std::size_t pos = str.find(to_be_erased);
    while (pos != std::string::npos) {
        str.erase(pos, 1);
        pos = str.find(to_be_erased);
    }
}

/* std::string::npos = "no position", czyli pozwala zwrócić indeks jako -1 (nie znaleziono) na co normalnie nie pozwala find */

std::string find_substr(const std::string &str, const std::string &to_find) {
    std::size_t pos = str.find(to_find);
    if (pos != std::string::npos) {
        return str.substr(pos, to_find.length());
    }
    return "";
}

void swap_strs(std::string &str1, std::string &str2) {
    str1.swap(str2);
}

std::string get_substr(const std::string &str, std::size_t start) {
    return str.substr(start);
}

void append_str(std::string &str, const std::string &to_append) {
    str.append(to_append);
}
//
// Created by Jakub on 11.04.2026.
//

#include <iostream>
#include <string>

#include <zadania-w-trakcie-zajec/ZadStringExample.hpp>

void runStringFunctionsExample() {
    std::string text1 = "Learning programming";
    std::string text2 = "C++ Course";

    std::cout << "\ntext1: " << text1 << std::endl;
    std::cout << "text2: " << text2 << std::endl;

    std::cout << "\n1. Is text1 empty? " << (is_empty(text1) ? "true" : "false" ) << std::endl;

    std::pair<std::size_t, std::size_t> size_pair = length_and_size(text1);
    std::cout << "2. Length and size of text1 (length == size): " << size_pair.first << ", " << size_pair.second << std::endl;

    std::cout << "3. text1[3]: " << "'" << element_at(text1, 3) << "'" << std::endl;

    std::cout << "4. Cleared text2: ";
    clear_str(text2);
    std::cout << "\"" << text2 << "\"" << std::endl;

    std::string tempText = "k c c p";
    std::cout << "5. tempText: " << tempText;
    erase_from_str(tempText, ' ');
    std::cout << "\n   tempText with spaces erased: " << tempText << std::endl;

    std::cout << "6. Search for \"pro\" in text1: " << find_substr(text1, "pro") << std::endl;

    swap_strs(text1, text2);
    std::cout << "7. Swapped strings: text1 = \"" << text1 << "\", text2: \"" << text2 << "\"" << std::endl;

    std::cout << "8. text2 substring starting from index=4 : " << get_substr(text2, 4) << std::endl;

    std::cout << "9. text1 and text2 concatenation: ";
    append_str(text2, text1);
    std::cout << text2 << std::endl;
}

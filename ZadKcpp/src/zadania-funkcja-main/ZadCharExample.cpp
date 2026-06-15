//
// Created by Jakub on 11.04.2026.
//

#include <iostream>
#include <cstring>

#include <zadania-funkcja-main/ZadCharExample.hpp>

void runZadCharExample() {
    const char* text = "Hello C++";
    char buffer[20] = "Hello World";
    const char* numbers = "0123456789";
    const char* haystack = "Find the needle in the haystack";
    const char* path = "/folder/subfolder/file.txt";

    std::cout << "\ntext: \"" << text << "\"" << std::endl;
    std::cout << "buffer: \"" << buffer << "\"" << std::endl;
    std::cout << "numbers: \"" << numbers << "\"" << std::endl;
    std::cout << "haystack: \"" << haystack << "\"" << std::endl;
    std::cout << "path: \"" << path << "\"" << std::endl;


    std::cout << "\n1. strlen of text: " << strlen(text) << std::endl;

    std::cout << "2. buffer before memset: \"" << buffer << "\"";
    memset(buffer, '*', 5);
    std::cout << "\n   buffer after memset: \"" << buffer << "\"" << std::endl;

    char csvData[] = "apple,banana,orange";
    std::cout << "3. strtok on \"apple,banana,orange\": ";
    char* token = strtok(csvData, ",");
    while (token != nullptr) {
        std::cout << "[" << token << "] ";
        token = strtok(nullptr, ",");
    }
    std::cout << std::endl;

    std::cout << "4. strstr searching for \"needle\": \"" << strstr(haystack, "needle") << "\"" << std::endl;

    std::cout << "5. strrchr searching for last '/': \"" << strrchr(path, '/') << "\"" << std::endl;

    const char* code = "abc123def";
    std::cout << "6. strpbrk first number in \"abc123def\": '" << *strpbrk(code, numbers) << "'" << std::endl;

    const char* mixed = "123abc456";
    std::cout << "7. strspn (initial numbers count) in \"123456abc789\": " << strspn(mixed, numbers) << std::endl;

    const char* letters = "abc123def";
    std::cout << "8. strcspn (chars before first number) in \"abcd123efg\": " << strcspn(letters, numbers) << std::endl;

    const char* word1 = "apple";
    const char* word2 = "banana";
    std::cout << "9. strcoll comparing \"apple\" and \"banana\": " << strcoll(word1, word2) << std::endl;

    char dest[20];
    std::size_t len = strxfrm(dest, word1, sizeof(dest));
    std::cout << "10. strxfrm transformed \"apple\" (length " << len << "): \"" << dest << "\"" << std::endl;
}
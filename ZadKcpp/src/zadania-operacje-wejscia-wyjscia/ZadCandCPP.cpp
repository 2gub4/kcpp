#include <iostream>
#include <iomanip>
#include <cstdio>
#include <fstream>
#include <limits>
#include <thread>
#include <chrono>
#include <string>

void outputOperationsAndFormattingComparison()
{
    printf("%i\n", 19);
    std::cout << 19 << "\n";
    printf("%x\n", 19);
    std::cout << std::hex << 19 << std::dec << "\n";
    printf("%f\n", 19.0);
    std::cout << std::fixed << std::setprecision(6) << 19.0 << "\n";
    constexpr double var = 19.0;
    printf("%f\n", var);
    std::cout << var << "\n";
    printf("%9f\n", 3.0);
    std::cout << std::setw(9) << 3.0 << "\n";
    printf("%11.3f\n", 3.1234);
    std::cout << std::setw(11) << std::setprecision(3) << 3.1234 << "\n";
    std::cout << std::defaultfloat;
    printf("Hello World!%f%c\n", 9.0, 'z');
    std::cout << "Hello World!" << std::fixed << std::setprecision(6) << 9.0 << 'z' << "\n";
    std::cout << std::defaultfloat;
}

void inputOperations()
{
    int varInt;
    float varFloat;
    double varDouble;
    char znak;
    char tab[100];
    printf("Enter [int] [float] [double] for C: ");
    fflush(stdout);
    scanf("%i %f %lf", &varInt, &varFloat, &varDouble);
    std::cout << "Enter [int] [float] [double] for C++: " << std::flush;
    std::cin >> varInt >> varFloat >> varDouble;
    printf("Enter [char] [string] for C: ");
    fflush(stdout);
    scanf(" %c %99s", &znak, tab);
    std::cout << "Enter [char] [string] for C++: " << std::flush;
    std::cin >> znak >> std::setw(sizeof(tab)) >> tab;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "Enter a single character to test 'skipws': " << std::flush;
    std::cin >> std::skipws >> znak;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "Enter another character for 'noskipws': " << std::flush;
    std::cin >> std::noskipws >> znak;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "Type a char with spaces for 'ws' & 'getchar': " << std::flush;
    std::cin >> std::ws;
    znak = getchar();
    ungetc(znak, stdin);
    std::cout << "Testing 'cin.get' and 'cin.unget'...\n";
    std::cin.get(znak);
    std::cin.unget();
    std::cin >> std::skipws;
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

void errorStreamingComparison()
{
    std::cout << std::flush;
    std::this_thread::sleep_for(std::chrono::milliseconds(50));
    fprintf(stderr, "Error! (C)\n");
    std::cerr << "Error! (C++)\n";
    std::this_thread::sleep_for(std::chrono::milliseconds(50));
}

void fileManagementComparison()
{
    if (FILE *c_file = fopen("c_output.txt", "w+"))
    {
        fprintf(c_file, "C file content test");
        rewind(c_file);
        char buffer[256];
        if (fgets(buffer, sizeof(buffer), c_file) != nullptr)
        {
            printf("Read from C file successfully: %s\n", buffer);
        }
        fclose(c_file);
    }

    const std::string cpp_filename = "cpp_output.txt";
    if (std::ofstream cpp_out(cpp_filename); cpp_out.is_open())
    {
        cpp_out << "C++ file content test";
        cpp_out.close();
    }

    if (std::ifstream cpp_in(cpp_filename); cpp_in.is_open())
    {
        std::string line;
        std::getline(cpp_in, line);
        std::cout << "Read from C++ file successfully: " << line << "\n";
        cpp_in.close();
    }
}

void runZadCandCPP()
{
    std::cout << "Output operations and formatting:\n";
    outputOperationsAndFormattingComparison();
    std::cout << "\nInput operations:\n";
    inputOperations();
    std::cout << "\nError streaming:\n";
    errorStreamingComparison();
    std::cout << "\nFile management (writing and reading):\n";
    fileManagementComparison();
}
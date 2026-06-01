#include <iostream>
#include <sstream>
#include <string>

void formatting() {
    std::stringstream ss;
    const std::string person = "Jakub Sosna";
    constexpr int age = 21;
    constexpr double height = 1.76;
    std::cout << "\tInitial state of ss: ss.str() = \"" << ss.str() << "\"" << std::endl;
    ss << "Full name: " << person << ", age: " << age << ", height: " << height << " GHz";
    std::cout << "\tAfter streaming data of various types into ss:  ss.str() = \"" << ss.str() << "\"" << std::endl;
}

void parsing() {
    const std::string dataString = "pi 3.14 e 2.72 sqrt(4) 2.0";
    std::stringstream ss(dataString);
    std::string variableNames[3] = {"", "", ""};
    float values[3] = {0.0, 0.0, 0.0};
    std::cout << "\tInitial state: \n";
    for (int i = 0; i < 3; i++)
    {
        std::cout << "\t\t" << variableNames[i] << "\"\", -> " << values[i] << "\n";
    }
    for (int i = 0; i < 3; i++)
    {
        ss >> variableNames[i] >> values[i];
    }
    std::cout << "\tAfter parsing data from console output: \n";
    for (int i = 0; i < 3; i++)
    {
        std::cout << "\t\t" << variableNames[i] << ", -> " << values[i] << std::endl;
    }
}

void reusing() {
    std::stringstream ss;
    ss << "First text";
    std::cout << "\tInitial state: ss.str() = \"" << ss.str() << "\"" << std::endl;
    ss.clear();
    ss.str("");
    ss << "Replacement text";
    std::cout << "\tAfter overwrite: ss.str() = \"" << ss.str() << "\"\n" << std::endl;
}

void runLStringStream() {
    std::cout << "Formatting:" << std::endl;
    formatting();
    std::cout << "Parsing:" << std::endl;
    parsing();
    std::cout << "Reusing:" << std::endl;
    reusing();
}
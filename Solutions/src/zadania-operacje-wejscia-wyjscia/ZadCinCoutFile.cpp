#include <iostream>
#include <string>
#include <fstream>
#include <thread>
#include <chrono>

void coutPrint(const std::string& message)
{
    std::cout << message << std::endl;
}

void cerrPrint(const std::string& errorMessage)
{
    std::cerr << errorMessage << std::endl;
}

void writeFile(const std::string& filename, const std::string& content)
{
    if (std::ofstream outFile(filename); outFile.is_open())
    {
        outFile << content;
        outFile.close();
    }
}

std::string readFile(const std::string& filename)
{
    std::ifstream inFile(filename);
    std::string content;
    if (inFile.is_open())
    {
        std::string line;
        while (std::getline(inFile, line))
        {
            content += line + "\n";
        }
        inFile.close();
    }
    return content;
}

void runZadCinCoutFile()
{
    const std::string fname = "file.txt";
    std::cout << "Standard output (cout): ";
    coutPrint("This message is printed using the standard output function.");
    std::cout << "Error Stream output (cerr): " << std::flush;
    cerrPrint(" This message is printed using the error stream function.");
    std::this_thread::sleep_for(std::chrono::milliseconds(50));
    std::cout << "*File writing - to " << fname << "*\n";
    writeFile(fname, "\tLine 1: File test.\n\tLine 2: Input Output stream test.");
    std::cout << "File reading - from " << fname << ": \n";
    const std::string fileContent = readFile(fname);
    std::cout << fileContent;
    //konieczne było zastosowanie asynchronicznego programowania i wątków
    //przez wzgląd na błędy w kolejności wyświetlania treści w tym zadaniu
}
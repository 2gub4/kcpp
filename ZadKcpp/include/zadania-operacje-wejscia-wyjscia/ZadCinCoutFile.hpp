#pragma once

#include<string>

void coutPrint(const std::string& message);

void cerrPrint(const std::string& errorMessage);

void writeFile(const std::string& filename, const std::string& content);

std::string readFile(const std::string& filename);

void runZadCinCoutFile();
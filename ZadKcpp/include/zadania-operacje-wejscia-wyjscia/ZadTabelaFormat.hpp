#pragma once

#include <string>
#include <vector>

struct Product {
    std::string name;
    double price;
    int quantity;
};

void printProducts(const std::vector<Product>& products);
void runZadTabelaFormat();

#include "ZadKccp.hpp"

#include <utility>


TemplateKcpp::TemplateKcpp(const int number, std::string  description) : number(number), description(std::move(description)) { }

std::string TemplateKcpp::getDescription() const { return "default description"; }

int TemplateKcpp::getNumber() const { return 0; }

TemplateKcpp::~TemplateKcpp() = default;

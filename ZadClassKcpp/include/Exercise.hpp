#pragma once

#include <string>
#include <functional>

#include "ZadKccp.hpp"
#include "Exercise.hpp"


class Exercise : public TemplateKcpp
{
    std::function<void()> taskFunction;

public:
    Exercise(int exerciseNumber, const std::string& exerciseDescription, std::function<void()> func);
    void execute() const override;
};
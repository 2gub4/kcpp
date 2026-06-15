#pragma once

#include <string>
#include <functional>

#include "ZadKccp.hpp"
#include "Exercise.hpp"


class Exercise : public TemplateKcpp
{
    std::function<void()> taskFunction;

public:
    Exercise(int exerciseNumber, std::string exerciseName, std::function<void()> func, const std::string& exerciseDescription);
    std::string exerciseName;
    void execute() const override;
    [[nodiscard]] std::string getExerciseName() const;
    [[nodiscard]] std::string getDescription() const override;
    [[nodiscard]] int getNumber() const override;
};
#pragma once

#include <vector>
#include <string>

#include "ZadKccp.hpp"
#include "Exercise.hpp"

class Section : public TemplateKcpp {
public:
    Section(int sectionNumber, const std::string& sectionDescription);
    Section(int sectionNumber, const std::string& sectionDescription, int numberOfExercises);
    int numberOfExercises;
    std::vector<Exercise> exercises{};
    [[nodiscard]] int getNumberOfExercises() const;
    [[nodiscard]] int getNumber() const override;
    [[nodiscard]] std::string getDescription() const override;
    Exercise getExercise(int exerciseNumber);
};
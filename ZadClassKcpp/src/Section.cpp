#include <string>

#include "ZadKccp.hpp"
#include "Section.hpp"

Section::Section(const int sectionNumber, const std::string& sectionDescription) : TemplateKcpp(sectionNumber, sectionDescription)
{
    numberOfExercises = 0;
    exercises.reserve(20);
}

Section::Section(const int sectionNumber, const std::string& sectionDescription, const int numberOfExercises) : TemplateKcpp(sectionNumber, sectionDescription), numberOfExercises(numberOfExercises)
{
    exercises.reserve(numberOfExercises);
}

std::string Section::getDescription() const { return this->description; }

int Section::getNumber() const { return this->number; }

int Section::getNumberOfExercises() const { return this->numberOfExercises; }

Exercise Section::getExercise(const int exerciseNumber) { return this->exercises[exerciseNumber-1]; }


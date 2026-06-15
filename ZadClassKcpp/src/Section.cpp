#include <iostream>
#include <string>
#include <utility>

#include "ZadKccp.hpp"
#include "Section.hpp"

Section::Section(const int sectionNumber, const std::string& sectionName, const std::string& sectionDescription) : TemplateKcpp(sectionNumber, sectionDescription)
{
    numberOfExercises = 0;
    exercises.reserve(20);
}

Section::Section(const int sectionNumber, std::string  sectionName, const std::string& sectionDescription, const int numberOfExercises)
: TemplateKcpp(sectionNumber, sectionDescription), numberOfExercises(numberOfExercises), sectionName(std::move(sectionName))
{ exercises.reserve(numberOfExercises); }

std::string Section::getDescription() const { return this->description; }

int Section::getNumber() const { return this->number; }

int Section::getNumberOfExercises() const { return this->numberOfExercises; }

Exercise Section::getExercise(const int exerciseNumber) { return this->exercises[exerciseNumber-1]; }

void Section::execute() const {
    std::cout << "________________________________\n";
    std::cout << "Sekcja " << getNumber() << ":\n";
    std::cout << getDescription() << "\n";
    std::cout << "Ilość zadań: " << exercises.size() << "\n";
    std::cout << "Dostępne rozwiązania: \n";
    for (const auto& exercise : exercises) {
        std::cout << " [" << exercise.getNumber() << "] " << exercise.getExerciseName() << "\n";
    }
    std::cout << "________________________________\n";
} //dodać iomanip

void Section::addExercise(const Exercise& exercise)
{
    this->exercises.push_back(exercise);
    this->numberOfExercises++;
}
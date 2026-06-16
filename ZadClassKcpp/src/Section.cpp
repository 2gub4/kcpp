#include <iostream>
#include <string>
#include <utility>

#include "ZadKccp.hpp"
#include "Section.hpp"

Section::Section(const int sectionNumber, std::string  sectionName, const std::string& sectionDescription) : TemplateKcpp(sectionNumber, sectionDescription), sectionName(std::move(sectionName))
{
    exercises.reserve(20);
}

std::string Section::getDescription() const { return this->description; }

int Section::getNumber() const { return this->number; }

int Section::getNumberOfExercises() const { return static_cast<int>(this->exercises.size()); }

Exercise Section::getExercise(const int exerciseNumber) { return this->exercises[exerciseNumber-1]; }

void Section::execute() const {
    std::cout << "________________________________\n";
    std::cout << "Sekcja " << getNumber() << ":\n";
    std::cout << getDescription() << "\n";
    std::cout << "Ilość zadań: " << exercises.size() << "\n";
    std::cout << "Dostępne rozwiązania: \n";
    for (const auto& exercise : exercises) {
        std::cout << " [" << exercise.getNumber() << "] - " << exercise.getExerciseName() << "\n";
    }
    std::cout << "\n [0] - Zakończ." << std::endl;
    std::cout << "________________________________\n";
}

void Section::addExercise(const Exercise& exercise)
{
    this->exercises.push_back(exercise);
}
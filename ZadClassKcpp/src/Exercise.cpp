#include "Exercise.hpp"
#include <iostream>
#include <utility>

Exercise::Exercise(const int exerciseNumber, std::string  exerciseName, std::function<void()> func, const std::string& exerciseDescription)
: TemplateKcpp(exerciseNumber, exerciseDescription), taskFunction(std::move(func)), exerciseName(std::move(exerciseName)) { }

void Exercise::execute() const
{
    if (taskFunction)
    {
        std::cout << this->getNumber() << ". \"" << this->getExerciseName() << "\" - " << this->getDescription() <<"\n\n";
        taskFunction();
    }
}

std::string Exercise::getDescription() const { return this->description; }

std::string Exercise::getExerciseName() const { return this->exerciseName; }

int Exercise::getNumber() const { return this->number; }


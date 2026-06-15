#include "Exercise.hpp"
#include <utility>

Exercise::Exercise(const int exerciseNumber, const std::string& exerciseDescription, std::function<void()> func)
    : TemplateKcpp(exerciseNumber, exerciseDescription), taskFunction(std::move(func)) { }

void Exercise::execute() const {
    if (taskFunction) {
        taskFunction();
    }
}
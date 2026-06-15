#pragma once

#include <string>


class TemplateKcpp
{
protected:
    int number;
    std::string description;

public:
    TemplateKcpp(int number, std::string description);
    virtual ~TemplateKcpp();

    [[nodiscard]] virtual std::string getDescription() const;
    [[nodiscard]] virtual int getNumber() const;

    virtual void execute() const = 0;
};
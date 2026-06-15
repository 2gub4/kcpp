#pragma once

#include <string>
#include <vector>

// Dodaj walidację danych (np. sprawdzanie, czy imię nie jest puste lub czy numer indeksu jest unikalny).

struct Student
{
    std::string name;
    std::string lastName;
    int albumNumber;

    bool operator < (const Student& otherStudent) const
    {
        return this->name < otherStudent.name;
    }
};

class StudentDb
{
public:
    StudentDb();
    void addStudent(const Student& student);
    void removeStudent(const int& albumNumber);
    void sortStudents();
    [[nodiscard]] bool studentExists(const int& albumNumber) const;
    [[nodiscard]] std::string printStudents() const;
private:
    std::vector<Student> students;
    [[nodiscard]] int getStudentIndex(const int& albumNumber) const;
};

void runZadStudent();
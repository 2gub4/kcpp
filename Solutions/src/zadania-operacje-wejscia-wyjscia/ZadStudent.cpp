#include "zadania-operacje-wejscia-wyjscia/ZadStudent.hpp"

#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <sstream>

// Dodaj walidację danych (np. sprawdzanie, czy imię nie jest puste lub czy numer indeksu jest unikalny).

StudentDb::StudentDb()
{
    students = std::vector<Student>();
};

void StudentDb::addStudent(const Student& student)
{
    this->students.push_back(student);
    std::cout << "Student successfully added to database." << std::endl;
}

void StudentDb::removeStudent(const int& albumNumber)
{
    if (const int idxToRemove = this->getStudentIndex(albumNumber); idxToRemove != -1)
    {
        this->students.erase(this->students.begin() + idxToRemove);
        std::cout << "Student successfully removed from database." << std::endl;
        return;
    }
    std::cout << "Couldn't remove student with album number: "
        << albumNumber << ". No such student in database."
        << std::endl;
}

void StudentDb::sortStudents()
{
    std::sort(this->students.begin(), this->students.end());
}

bool StudentDb::studentExists(const int& albumNumber) const
{
    for (const auto& student : this->students) // NOLINT(*-use-anyofallof)
    {
        if (student.albumNumber == albumNumber) return true;
    }
    return false;
}

std::string StudentDb::printStudents() const {
    std::ostringstream output;
    output << "[ ";
    for (size_t i = 0; i < students.size(); ++i) {
        output << "(" << students[i].name << " " << students[i].lastName << ": " << students[i].albumNumber << ")";
        if (i + 1 < students.size()) {
            output << ", ";
        } else {
            output << " ";
        }
    }
    output << " ]";
    return output.str();
}

int StudentDb::getStudentIndex(const int& albumNumber) const
{
    for (int i = 0; i < students.size(); ++i) {
        if (students[i].albumNumber == albumNumber) {
            return i;
        }
    }
    return -1;
}

void runZadStudent()
{
    constexpr int numberForSearch = 437821;
    constexpr int numberToDelete = 654193;
    const auto student = Student("Jan", "Kowalski", 123456);
    const auto studentka = Student("Anna", "Nowak", 456789);
    const auto studentZagraniczny = Student("Bob", "Smith", 654193);
    auto studentsDb = StudentDb();
    studentsDb.addStudent(studentZagraniczny);
    studentsDb.addStudent(student);
    studentsDb.addStudent(studentka);
    std::cout << "\nAdded students: \n\t" << studentsDb.printStudents() << std::endl;
    studentsDb.sortStudents();
    std::cout << "\nSorted students: \n\t" << studentsDb.printStudents() << "\n" << std::endl;
    const std::string studentExists = studentsDb.studentExists(numberForSearch) ? "true" : "false";
    const std::string studentExists2 = studentsDb.studentExists(numberToDelete) ? "true" : "false";
    std::cout << "Student with album number " << numberForSearch << " exists: " << studentExists << std::endl;
    std::cout << "Student with album number " << numberToDelete << " exists: " << studentExists2 << std::endl;
    std::cout << "\nTrying to delete student with album number: " << numberToDelete << "..." << std::endl;
    studentsDb.removeStudent(numberToDelete);
    std::cout << "Database after deletion: " << studentsDb.printStudents() << std::endl;
}
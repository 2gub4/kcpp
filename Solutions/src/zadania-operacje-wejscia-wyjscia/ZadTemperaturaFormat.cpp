#include <iostream>
#include <iomanip>

double convertToFahrenheit(const double celsiusTemp)
{
    return celsiusTemp * 9.0 / 5.0 + 32.0;
}
void displayResultsTable() {
    std::cout << "Celsjusz   Fahrenheit\n";
    std::cout << "-------    ---------\n";
    for (int celsius = -10; celsius <= 10; celsius += 5) {
        const double fahrenheit = convertToFahrenheit(celsius);
        std::cout << std::right << std::setw(5) << celsius << "    "
                  << std::right << std::setw(9) << std::fixed << std::setprecision(2) << fahrenheit << "\n";
    }
}

void runZadTemperaturaFormat() {
    displayResultsTable();
}
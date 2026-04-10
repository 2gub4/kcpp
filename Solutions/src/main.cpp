#include <iostream>

#include "zadania-funkcja-main/ZadEnumExample.hpp"
#include "zadania-funkcja-main/ZadClassExample.hpp"


int main() {
    runZadEnumExample();
    std::cout << std::endl;
    //runZadClassExample();
    std::cout << std::endl;
    Car car1 = Car("Toyota");
    Car car2 = Car();
    Car car3 = Car();
    Car car4 = Car();
    Car car5 = Car();
    Car car6 = Car();
    Car car7 = Car();
    Car car8 = Car();
    Car car9 = Car();
    std::cout << car1.brand_name << " " << car1.get_vin_number() << std::endl;
    std::cout << Car::get_number_of_cars() << std::endl;

    std::cout << car2.get_vin_number() << std::endl;
    std::cout << car4.get_vin_number() << std::endl;
    std::cout << car8.get_vin_number() << std::endl;

    return 0;
}

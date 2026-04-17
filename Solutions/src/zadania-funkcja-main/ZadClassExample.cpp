//
// Created by Jakub on 09.04.2026.
//

#include <iostream>
#include <format>
#include "zadania-funkcja-main/ZadClassExample.hpp"

const int currentYear = 2026;
const long long fake_vin = 10000000000000000;

int Car::car_instances = 0;
const float OwnedCar::mile_multiplier = 1.609333;

Car::Car() : brand_name("unknown"), cars_model("01"), year_of_production(currentYear)
{
    ++car_instances;
    VIN = set_vin(fake_vin + car_instances);
    std::cout << "***Car instance created***\n";
}

Car::Car(std::string brand) :
    cars_model("unknown"),
    year_of_production(currentYear)
{
    ++car_instances;
    brand_name = brand;
    VIN = set_vin(fake_vin + car_instances);
}

Car::~Car() { std::cout << "***Car instance destroyed***\n"; }

Car::Car(std::string brand, std::string model) :
    year_of_production(currentYear)
{
    ++car_instances;
    brand_name = brand;
    cars_model = model;
    VIN = set_vin(fake_vin + car_instances);
}

Car::Car(std::string brand, std::string model, int procuction_year)
{
    ++car_instances;
    brand_name = brand;
    cars_model = model;
    year_of_production = procuction_year;
    VIN = set_vin(fake_vin + car_instances);
}

std::string Car::set_vin(long long fake_numeric_vin) {
    return std::to_string(fake_numeric_vin);
}

std::string Car::get_vin_number() {
    return VIN;
}

int Car::get_number_of_cars() {
    return car_instances;
}

std::string Car::to_string() {
    return std::format("[ Brand: \"{}\" \nModel: \"{}\"\nYeaar of production: \"{}\"\nVIN: \"{}\" ]", brand_name, cars_model, year_of_production, get_vin_number());
}

OwnedCar::OwnedCar() : Car(), years_owned(0), mileage(0) {}

OwnedCar::OwnedCar(std::string brand, std::string model, std::string license_plate) :
    Car(brand, model),
    license_plate(license_plate),
    years_owned(0),
    mileage(0)
{ }

OwnedCar::OwnedCar(std::string brand, std::string model, int production_year, std::string license_plate, int years_owned, int mileage) :
    Car(brand, model, production_year),
    license_plate(license_plate),
    years_owned(years_owned),
    mileage(mileage)
{ }



std::string OwnedCar::get_owner() {
    return owners_name;
}

void OwnedCar::set_owner(std::string owner) {
    this->owners_name = owner;
}

float OwnedCar::miles_to_kilometers(int miles) {
    return  static_cast<float>(miles) * mile_multiplier;
}

std::string OwnedCar::to_string() {
    return (
        std::format(
            "{}\nLicense Plate: \"{}\"\nYears owned: {}\nMileage: {} mi ({} km)\nOwner: \"{}\" ]",
            Car::to_string(),
            license_plate,
            years_owned,
            mileage,
            miles_to_kilometers(mileage),
            owners_name
        )
    );
}

void runZadClassExample() {
    Car car1 = Car("Toyota");
    Car car2 = Car();
    Car car3 = Car();
    Car car4 = Car();
    Car car5 = Car();
    Car car6 = Car();
    Car car7 = Car();
    Car car8 = Car();
    Car car9 = Car();

    car1.cars_model = "Yaris";
    std::cout << "\n[First car: " << car1.to_string() << "]\n\n";
    std::cout << "Another 8 instances created...\n";
    std::cout << "Number of cars: " << Car::get_number_of_cars() << "\n\n";
    std::cout << "(fake) VIN of car8: " << car8.get_vin_number() << "\n\n";

    Car *car10 = new Car();
    std::cout << "(car created on heap using 'new' keyword) Car 10's VIN number: " << car10->get_vin_number() << "\n\n";

    OwnedCar my_car("Ford", "Mustang", "PO 12345");
    my_car.set_owner("Jan Kowalski");
    my_car.mileage = 15000;
    my_car.years_owned = 2;

    std::cout << "[Owned Car 1:\n" << my_car.to_string() << "]\n\n";
    OwnedCar random_car("Honda", "Civic", 2021,"WA 54321", 3, 45000);
    random_car.set_owner("Anna Nowak");
    std::cout << "[Owned Car 2:\n" << random_car.to_string() << "]\n\n";
    OwnedCar car12;
    std::cout << "Total number of cars (Car + OwnedCar): " << Car::get_number_of_cars() << "\n" << std::endl;

    delete car10;
}


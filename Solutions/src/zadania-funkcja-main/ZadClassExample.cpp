//
// Created by Jakub on 09.04.2026.
//

#include "zadania-funkcja-main/ZadClassExample.hpp"

int Car::car_instances = 0;
long Car::fake_vin = 100000000;
const float OwnedCar::mile_multiplier = 1.609333;

Car::Car() : cars_model(" "), year_of_production(2026), number_of_door(3), VIN("123456789") { ++car_instances; ++fake_vin; VIN = set_vin(); }
Car::Car(std::string brand) : year_of_production(0), number_of_door(0), VIN("123456789") { brand_name = brand; ++car_instances; ++fake_vin; VIN = set_vin();}
Car::Car(std::string brand, std::string model) : year_of_production(0), number_of_door(0) { brand_name = brand; cars_model = model; ++car_instances; ++fake_vin; VIN = set_vin();}

OwnedCar::OwnedCar() : years_owned(0), mileage(0) { ++car_instances; }

Car::~Car() = default;
OwnedCar::~OwnedCar() = default;

std::string Car::set_vin() { return std::to_string(fake_vin); }
std::string Car::get_vin_number() { return VIN; }


int Car::get_number_of_cars() {
    return car_instances;
}
float OwnedCar::miles_to_kilometers(int miles) {
    return  static_cast<float>(miles) * mile_multiplier;
}
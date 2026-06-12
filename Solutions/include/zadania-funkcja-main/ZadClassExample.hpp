#pragma once
#include <string>

class Car {
    public:
        Car();
        ~Car();
        explicit Car(const std::string& brand);
        Car(const std::string& brand, const std::string& model);
        Car(const std::string& brand, const std::string& model, int procuction_year);

        std::string brand_name;
        std::string cars_model;
        int year_of_production;

        static int car_instances;

        static int get_number_of_cars();

        std::string get_vin_number();
        std::string to_string();

    private:
        static std::string set_vin(long long fake_numeric_vin);
        std::string VIN;
};


class OwnedCar : public Car {
    public:
        OwnedCar();
        OwnedCar(const std::string& brand, const std::string& model, std::string  license_plate);
        OwnedCar(const std::string& brand, const std::string& model, int production_year, std::string  license_plate, int years_owned, int mileage);

        std::string license_plate;
        int years_owned;
        int mileage;

        void set_owner(const std::string& owner);
        std::string get_owner();

        std::string to_string();

        static float miles_to_kilometers(int miles);

    private:
        static const float mile_multiplier;
        std::string owners_name;
};


void runZadClassExample();

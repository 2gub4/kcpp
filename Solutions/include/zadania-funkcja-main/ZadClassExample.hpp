#pragma once
#include <string>

class Car {
    public:
        Car();
        Car(std::string brand);
        Car(std::string brand, std::string model);

        ~Car();

        std::string brand_name;
        std::string cars_model;
        int year_of_production;
        int number_of_door;

        static int car_instances;
        static long fake_vin;

        static int get_number_of_cars();

        std::string get_vin_number();

    private:
        std::string set_vin();
        std::string VIN;
};


class OwnedCar : public Car {
    public:
        OwnedCar();
        OwnedCar(std::string brand, std::string model,std::string license_plate);
        OwnedCar(std::string brand, std::string model, int year, int doors, std::string license_plate, int years_owned, int mileage);

        ~OwnedCar();


        std::string license_plate;
        int years_owned;
        int mileage;

        static float miles_to_kilometers(int miles);

    private:
        static const float mile_multiplier;
        std::string owners_name;
        std::string insurance_id;
};

#include "Car.h"

const int CARS_LIMIT = 10;
#pragma once
class Dealer
{
public:
    std::string name;
    Car inventory[CARS_LIMIT] = {
        Car("Hyundai", "Accent", 90),
        Car("VOLVO", "XC90", 97),
        Car("Volkswagen", "Tiguan", 150),
        Car("Toyota", "Highlander", 110),
    };
    void listOfCars() {
        cout << "The name is " << name << endl;
        for (int i = 0; i < CARS_LIMIT; i++) {
            inventory[i].printCarInfo();
            cout << endl;

        }

    }

};

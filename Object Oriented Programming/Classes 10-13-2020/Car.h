#include <string>
#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;

#pragma once

class Car
{
	//make, model, max speed
	std::string make;
	std::string model;
	unsigned short maxSpeed;

public:
	std::string getMake() const {
		return make;
	};
	std::string getModel() const {
		return model;
	};
	unsigned short getMaxSpeed() const {
		return maxSpeed;
	};
	void printCarInfo() const;

	//constructors
	Car(std::string);
	Car(); //default constructor
    Car(
        std::string make_ = "Test Make",
        std::string model_ = "Test Model" ,
        unsigned short maxSpeed_ = 0
        );

};

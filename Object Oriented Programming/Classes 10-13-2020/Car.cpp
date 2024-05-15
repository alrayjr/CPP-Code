#include "Car.h"

void Car::printCarInfo() const {
	cout << "Car make is " << Car::getMake() << endl;
	cout << "Car model is " << Car::getModel() << endl;
	cout << "Car max speed is " << Car::getMaxSpeed() << endl;

}
/*Car::Car(std::string make_){
    make = make_;
}

Car::Car() {
    make = "Test model";
    model = "Test make";
    maxSpeed = 0;
}*/

Car::Car(std::string make_, std::string model_, unsigned short maxSpeed_)
{
    make = make_;
    model = model_;
    maxSpeed = maxSpeed_;
}




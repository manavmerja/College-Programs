#include "car.h"
#include <iostream>

using namespace std;

Car::Car(int engineCapacity, int fuelEfficiency,
     int topSpeed, int numberOfDoors)
    : Vehicle(engineCapacity,
         fuelEfficiency, topSpeed) {
    this->numberOfDoors = numberOfDoors;
}

void Car::display() {
    cout << "Car: " << numberOfDoors
     << " doors" << endl;
}
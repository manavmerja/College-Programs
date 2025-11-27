#include "vehicle.h"
#include <iostream>

using namespace std;

Vehicle::Vehicle(int engineCapacity,
     int fuelEfficiency, int topSpeed) {
    this->engineCapacity = engineCapacity;
    this->fuelEfficiency = fuelEfficiency;
    this->topSpeed = topSpeed;
}
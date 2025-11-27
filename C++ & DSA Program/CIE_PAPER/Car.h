#ifndef CAR_H
#define CAR_H

#include "vehicle.h"

class Car : public Vehicle {
private:
    int numberOfDoors;

public:
    Car(int engineCapacity,
         int fuelEfficiency,
          int topSpeed,
           int numberOfDoors);
    void display();
};
#endif 
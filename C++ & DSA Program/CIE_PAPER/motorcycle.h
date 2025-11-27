#ifndef MOTORCYCLE_H
#define MOTORCYCLE_H

#include "vehicle.h"

class Motorcycle : public Vehicle {
private:
    int hasSidecar;

public:
    Motorcycle(int engineCapacity,
         int fuelEfficiency,
          int topSpeed,
           int hasSidecar);
    void display();
};

#endif  // MOTORCYCLE_H
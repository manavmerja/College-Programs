#ifndef VEHICLE_H
#define VEHICLE_H

class Tester;

class Vehicle {
protected:
    int engineCapacity;
    int fuelEfficiency;
    int topSpeed;

public:
    Vehicle(int engineCapacity, int fuelEfficiency, int topSpeed);
    friend class Tester;
};
#endif 
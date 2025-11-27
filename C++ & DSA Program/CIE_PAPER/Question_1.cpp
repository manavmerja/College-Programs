#include <iostream>

using namespace std;

class Vehicle {
protected:
    int engineCapacity;
    int fuelEfficiency;
    int topSpeed;

public:
    Vehicle(int engineCapacity, int fuelEfficiency, int topSpeed) {
        this->engineCapacity = engineCapacity;
        this->fuelEfficiency = fuelEfficiency;
        this->topSpeed = topSpeed;
    }

    friend class Tester;
};

class Car : public Vehicle {
private:
    int numberOfDoors;

public:
    Car(int engineCapacity, int fuelEfficiency, int topSpeed, int numberOfDoors)
        : Vehicle(engineCapacity, fuelEfficiency, topSpeed) {
        this->numberOfDoors = numberOfDoors;
    }

    void display() {
        cout << "Car: " << numberOfDoors << " doors" << endl;
    }
};

class Motorcycle : public Vehicle {
private:
    int hasSidecar;

public:
    Motorcycle(int engineCapacity, int fuelEfficiency, int topSpeed, int hasSidecar)
        : Vehicle(engineCapacity, fuelEfficiency, topSpeed) {
        this->hasSidecar = hasSidecar;
    }

    void display() {
        cout << "Motorcycle: " << hasSidecar << endl;
    }
};

class Tester {
public:
    void testVehicle() {
        Vehicle v(2.0, 15.0, 200);
        cout << "Engine Capacity: " << v.engineCapacity << " L\n";
        cout << "Fuel Efficiency: " << v.fuelEfficiency << " km/l\n";
        cout << "Top Speed: " << v.topSpeed << " km/h\n";
    }
};

int main() {
    Car car(2.0, 15.0, 200, 4);
    Motorcycle motorcycle(1.5, 20.0, 180, 1);

    car.display();
    motorcycle.display();

    Tester tester;
    tester.testVehicle();

    return 0;
}
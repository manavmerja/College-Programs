#include <iostream>
using namespace std;

// Base class Vehicle
class Vehicle {
protected:
    double engineCapacity;
    double fuelEfficiency;
    double topSpeed;

public:
    Vehicle(double engine, double fuelEff, double speed)
        : engineCapacity(engine), fuelEfficiency(fuelEff), topSpeed(speed) {}

    // Friend class declaration
    friend class Tester;
};

// Derived class Car
class Car : public Vehicle {
private:
    int numberOfDoors;

public:
    Car(double engine, double fuelEff, double speed, int doors)
        : Vehicle(engine, fuelEff, speed), numberOfDoors(doors) {}

    void display() {
        cout << "Car: " << numberOfDoors << " doors" << endl;
    }
};

// Derived class Motorcycle
class Motorcycle : public Vehicle {
private:
    bool hasSidecar;

public:
    Motorcycle(double engine, double fuelEff, double speed, bool sidecar)
        : Vehicle(engine, fuelEff, speed), hasSidecar(sidecar) {}

    void display() {
        cout << "Motorcycle: " << (hasSidecar ? "Has Sidecar" : "No Sidecar") << endl;
    }
};

// Tester class declared as a friend of Vehicle
class Tester {
public:
    void testVehicle(const Vehicle &v) {
        cout << "Testing Vehicle...\n";
        cout << "Engine Capacity: " << v.engineCapacity << " L\n";
        cout << "Fuel Efficiency: " << v.fuelEfficiency << " km/l\n";
        cout << "Top Speed: " << v.topSpeed << " km/h\n";
    }
};

int main() {
    // Creating objects of Car and Motorcycle
    Car car(2.0, 15.0, 200, 4);
    Motorcycle bike(1.2, 30.0, 180, true);

    // Creating Tester object
    Tester tester;

    // Displaying information
    car.display();
    tester.testVehicle(car);
    
    cout << "----------------------\n";
    
    bike.display();
    tester.testVehicle(bike);

    return 0;
}

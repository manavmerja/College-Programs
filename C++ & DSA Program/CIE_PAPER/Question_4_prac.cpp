#include <iostream>
using namespace std;

// Base class: Vehicle
class Vehicle {
public:
    string modelName;
    double basePrice;

    Vehicle(string model, double price) {
        modelName = model;
        basePrice = price;
        cout << "Vehicle Created: " << modelName << endl;
    }

    ~Vehicle() {
        cout << "Vehicle Destroyed: " << modelName << endl;
    }

    void displayDetails() {
        cout << "Model: " << modelName << "\nBase Price: $" << basePrice << endl;
    }
};

// Derived class: Car
class Car : public Vehicle {
public:
    int numDoors;
    string fuelType;

    Car(string model, double price, int doors, string fuel) : Vehicle(model, price) {
        numDoors = doors;
        fuelType = fuel;
        cout << "Car Created: " << modelName << endl;
    }

    ~Car() {
        cout << "Car Destroyed: " << modelName << endl;
    }

    void displayDetails() {
        Vehicle::displayDetails();
        cout << "Doors: " << numDoors << "\nFuel Type: " << fuelType << endl;
    }
};

// Derived class: ElectricCar
class ElectricCar : public Car {
public:
    int batteryCapacity;
    double chargingTime;

    ElectricCar(string model, double price, int doors, int battery, double chargeTime) : Car(model, price, doors, "Electric") {
        batteryCapacity = battery;
        chargingTime = chargeTime;
        cout << "Electric Car Created: " << modelName << endl;
    }

    ~ElectricCar() {
        cout << "Electric Car Destroyed: " << modelName << endl;
    }

    void displayDetails() {
        Car::displayDetails();
        cout << "Battery: " << batteryCapacity << " kWh\nCharging Time: " << chargingTime << " hours" << endl;
    }
};

int main() {
    Vehicle v("Basic Model", 15000);
    v.displayDetails();
    cout << "-----------------------------\n";

    Car c("Sedan", 25000, 4, "Petrol");
    c.displayDetails();
    cout << "-----------------------------\n";

    ElectricCar e("Tesla Model 3", 45000, 4, 75, 8.5);
    e.displayDetails();
    cout << "-----------------------------\n";
    
    return 0;
}

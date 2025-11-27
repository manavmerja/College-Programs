#include <iostream>
using namespace std;

class Vehicle {
public:
    string name;
    int Price;

    Vehicle(string model, double price) {
        this-> name = model;
        this-> Price = price;
        cout << "Vehicle Created: " << name << endl;
    }

    ~Vehicle() {
        cout << "Vehicle Destroyed: " << name << endl;
    }

    void displayDetails() {
        cout << "Model: " << name << "\nBase Price: " << Price << endl;
    }
};

class car : public Vehicle {
public:
    int Doors;
    string fuel;

    car(string model, int price, int doors, string fuel) : Vehicle(model, price) {
        this-> Doors = doors;
        this->fuel = fuel;
        cout << "Car Created: " << name << endl;
    }

    ~car() {
        cout << "Car Destroyed: " << name << endl;
    }

    void displayDetails() {
        Vehicle::displayDetails();
        cout << "Doors: " << Doors << "\nFuel Type: " << fuel << endl;
    }

};

class ElectricCar : public car {
    public:
    string batteryType;
    int  chargingTime;
    ElectricCar(string model, double price, int doors, string fuel, string batteryType, int chargingTime) : car(model, price, doors, fuel) {
        this->batteryType = batteryType;
        this->chargingTime = chargingTime;
        cout << "Electric Car Created: " << name << endl;
    }

    ~ElectricCar() {
        cout << "Electric Car Destroyed: " << name << endl;
    }

    void displayDetails() {
        car::displayDetails();
        cout << "Battery Type: " << batteryType << "\nCharging Time: " << chargingTime << endl;
    }
};

int main() {
    Vehicle v("simple modal", 20000);
    v.displayDetails();

    car c("Toyota ", 2500000, 4, "Petrol");
    c.displayDetails();

    ElectricCar ec("TATA EV", 800000, 4, "Electric", "Lithium-ion", 10);
    ec.displayDetails();

    return 0;
}

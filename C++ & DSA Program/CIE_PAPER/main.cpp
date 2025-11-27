#include "car.h"
#include "motorcycle.h"
#include "tester.h"

int main() {
    Car car(2.0, 15.0, 200, 4);
    Motorcycle 
    motorcycle(1.5, 20.0, 180, 1);

    car.display();
    motorcycle.display();

    Tester tester;
    tester.testVehicle();

    return 0;
}
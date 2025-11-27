#include "tester.h"
#include <iostream>

using namespace std;

void Tester::testVehicle() {
    Vehicle v(2.0, 15.0, 200);
    cout << "Engine Capacity: "
     << v.engineCapacity << " L\n";
    cout << "Fuel Efficiency: "
     << v.fuelEfficiency << " km/l\n";
    cout << "Top Speed: " <<
     v.topSpeed << " km/h\n";
}
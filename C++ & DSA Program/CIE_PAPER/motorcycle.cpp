#include "motorcycle.h"
#include <iostream>

using namespace std;

Motorcycle::Motorcycle(int engineCapacity,
     int fuelEfficiency,
      int topSpeed,
       int hasSidecar)
    : Vehicle(engineCapacity,
         fuelEfficiency,
          topSpeed) {
    this->hasSidecar = hasSidecar;
}

void Motorcycle::display() {
    cout << "Motorcycle: " << hasSidecar << endl;
}
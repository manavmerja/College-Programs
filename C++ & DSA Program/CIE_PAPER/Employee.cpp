#include "Employee.h"
using namespace std;
void Employee::inputDetails() {
    cout << "Enter Employee ID: ";
    cin >> employeeID;
    cin.get();
    cout << "Enter Name: ";
    getline(cin, name);
    cout << "Enter Basic Salary: ";
    cin >> basicSalary;
}
void Employee::displayDetails() {
    cout << "Employee ID: " << employeeID << endl;
    cout << "Name: " << name << endl;
    cout << "Basic Salary: " << basicSalary << endl;
}
void Manager::inputDetails() {
    Employee::inputDetails();
    cin.get();
    cout << "Enter Department: ";
    getline(cin, department);
    cout << "Enter Team Size: ";
    cin >> teamSize;
}
void Manager::displayDetails() {
    Employee::displayDetails();
    cout << "Department: " << department << endl;
    cout << "Team Size: " << teamSize << endl;
}
void Executive::inputDetails() {
    Manager::inputDetails();
    cout << "Enter Bonus: ";
    cin >> bonus;
    cout << "Enter Stock Options: ";
    cin >> stockOptions;
}
void Executive::displayDetails() {
    Manager::displayDetails();
    cout << "Bonus: " << bonus << endl;
    cout << "Stock Options: " << stockOptions << endl;
}
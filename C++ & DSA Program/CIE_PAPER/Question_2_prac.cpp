#include <iostream>
using namespace std;

// Base class Employee
class Employee {
private:
    int employeeID;
    string name;
    double basicSalary;

public:
    void inputDetails() {
        cout << "Enter Employee ID: ";
        cin >> employeeID;
        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Basic Salary: ";
        cin >> basicSalary;
    }

    void displayDetails() {
        cout << "Employee ID: " << employeeID << endl;
        cout << "Name: " << name << endl;
        cout << "Basic Salary: " << basicSalary << endl;
    }
};

// Derived class Manager
class Manager : public Employee {
private:
    string department;
    int teamSize;

public:
    void inputDetails() {
        Employee::inputDetails();
        cin.ignore();
        cout << "Enter Department: ";
        getline(cin, department);
        cout << "Enter Team Size: ";
        cin >> teamSize;
    }

    void displayDetails() {
        Employee::displayDetails();
        cout << "Department: " << department << endl;
        cout << "Team Size: " << teamSize << endl;
    }
};

// Derived class Executive
class Executive : public Manager {
private:
    double bonus;
    int stockOptions;

public:
    void inputDetails() {
        Manager::inputDetails();
        cout << "Enter Bonus: ";
        cin >> bonus;
        cout << "Enter Stock Options: ";
        cin >> stockOptions;
    }

    void displayDetails() {
        Manager::displayDetails();
        cout << "Bonus: " << bonus << endl;
        cout << "Stock Options: " << stockOptions << endl;
    }
};

int main() {
    Employee emp;
    Manager mgr;
    Executive exec;

    cout << "Enter Employee Details:\n";
    emp.inputDetails();
    cout << "\nEnter Manager Details:\n";
    mgr.inputDetails();
    cout << "\nEnter Executive Details:\n";
    exec.inputDetails();

    cout << "\nEmployee Details:\n";
    emp.displayDetails();
    cout << "\nManager Details:\n";
    mgr.displayDetails();
    cout << "\nExecutive Details:\n";
    exec.displayDetails();

    return 0;
}

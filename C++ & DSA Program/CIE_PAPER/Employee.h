#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
#include <string>
class Employee {
private:
    int employeeID;
    std::string name;
    int basicSalary;
public:
    void inputDetails();
    void displayDetails();
};
class Manager : public Employee {
private:
    std::string department;
    int teamSize;
public:
    void inputDetails();
    void displayDetails();
};
class Executive : public Manager {
private:
    int bonus;
    int stockOptions;
public:
    void inputDetails();
    void displayDetails();
};
#endif  
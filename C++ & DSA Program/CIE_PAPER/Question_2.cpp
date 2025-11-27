#include<iostream>
using namespace std;

class Employee{
    private:
        int employeeID;
        string name;
        int basicSalary;
    public:
        void inputDetails(){
            cout<<"Enter Employee ID: ";
            cin>>employeeID;
            cin.get();
            cout<<"Enter Name: ";
            getline(cin,name);
            cout<<"Enter Basic Salary: ";
            cin>>basicSalary;
        }
        void displayDetails(){
            cout<<"Employee ID: "<<employeeID<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Basic Salary: "<<basicSalary<<endl;
        }
};

class Manager: public Employee{
    private:
        string department;
        int teamSize;
    public:
        void inputDetails(){
            Employee::inputDetails();
            cin.get();
            cout<<"Enter Department: ";
            getline(cin,department);
            cout<<"Enter Team Size: ";
            cin>>teamSize;
        }
        void displayDetails(){
            Employee::displayDetails();
            cout<<"Department: "<<department<<endl;
            cout<<"Team Size: "<<teamSize<<endl;
        }
};

class Executive: public Manager{
    private:
        int bonus;
        int stockOptions;
    public:
        void inputDetails(){
            Manager::inputDetails();
            cout<<"Enter Bonus: ";
            cin>>bonus;
            cout<<"Enter Stock Options: ";
            cin>>stockOptions;
        }
        void displayDetails(){
            Manager::displayDetails();
            cout<<"Bonus: "<<bonus<<endl;
            cout<<"Stock Options: "<<stockOptions<<endl;
        }
};

int main(){
    Employee emp;
    Manager mgr;
    Executive exec;

    emp.inputDetails();
    emp.displayDetails();
    cout<<endl;
    mgr.inputDetails();
    mgr.displayDetails();
    cout<<endl;
    exec.inputDetails();
    exec.displayDetails();
    cout<<endl;
    return 0;
}
#include <iostream>
using namespace std;

// Base class Person
class Person {
private:
    int ID;
    string name;
    int age;

public:
    void inputDetails() {
        cout << "Enter ID: ";
        cin >> ID;
        cin.get();
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Age: ";
        cin >> age;
    }

    void displayDetails() {
        cout << "ID: " << ID << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Doctor : virtual public Person {
private:
    string specialization;
    int experienceYears;

public:
    void inputDetails() {
        Person::inputDetails();
        cin.get();
        cout << "Enter Specialization: ";
        getline(cin, specialization);
        cout << "Enter Experience Years: ";
        cin >> experienceYears;
    }

    void displayDetails() {
        Person::displayDetails();
        cout << "Specialization: " << specialization << endl;
        cout << "Experience Years: " << experienceYears << endl;
    }
};

class Nurse : virtual public Person {
private:
    string shiftTiming;
    string wardAssigned;

public:
    void inputDetails() {
        Person::inputDetails();
        cin.get();
        cout << "Enter Shift Timing: ";
        getline(cin, shiftTiming);
        cout << "Enter Ward Assigned: ";
        getline(cin, wardAssigned);
    }

    void displayDetails() {
        Person::displayDetails();
        cout << "Shift Timing: " << shiftTiming << endl;
        cout << "Ward Assigned: " << wardAssigned << endl;
    }
};


class InternDoctor : public Doctor, public Nurse {
private:
    string supervisorName;
    int trainingDuration;

public:
    void inputDetails() {
        Doctor::inputDetails();
        Nurse::inputDetails();
        cin.ignore();
        cout << "Enter Supervisor Name: ";
        getline(cin, supervisorName);
        cout << "Enter Training Duration (months): ";
        cin >> trainingDuration;
    }

    void displayDetails() {
        Doctor::displayDetails();
        Nurse::displayDetails();
        cout << "Supervisor Name: " << supervisorName << endl;
        cout << "Training Duration: " << trainingDuration << " months" << endl;
    }
};

int main() {
    Person person;
    Doctor doctor;
    Nurse nurse;
    InternDoctor intern;

    cout << "Enter Person Details:\n";
    person.inputDetails();
    cout << "\nEnter Doctor Details:\n";
    doctor.inputDetails();
    cout << "\nEnter Nurse Details:\n";
    nurse.inputDetails();
    cout << "\nEnter InternDoctor Details:\n";
    intern.inputDetails();

    cout << "\nPerson Details:\n";
    person.displayDetails();
    cout << "\nDoctor Details:\n";
    doctor.displayDetails();
    cout << "\nNurse Details:\n";
    nurse.displayDetails();
    cout << "\nInternDoctor Details:\n";
    intern.displayDetails();

    return 0;
}

#include "Employee.h"

using namespace std;

int main() {
    Employee emp;
    Manager mgr;
    Executive exec;

    emp.inputDetails();
    emp.displayDetails();
    cout << endl;
    mgr.inputDetails();
    mgr.displayDetails();
    cout << endl;
    exec.inputDetails();
    exec.displayDetails();
    cout << endl;
    return 0;
}
#include<iostream>
#include<vector>
#include<string>
using namespace std;

class employee{
    private:
    string name;
    double basic_salary;
    double Bonus;
    public:

    employee(string name,double basic_salary,double Bonus=500)
    : name(name),basic_salary(basic_salary),Bonus(Bonus){}

    inline double Total_salary(){
        return basic_salary + Bonus;
    }
    inline double bonus(){
        return Bonus;
    }

    void Get_Data(){
        cout <<"name: " <<name << endl;
        cout <<"Total_salary: " << Total_salary() << endl;
        cout<<"Bonus: " << bonus() << endl;
    }
};

int main(){
    vector<employee> employees;
    employees.push_back(employee("manav",5000));
    employees.push_back(employee("rahul",5000));

    employees.push_back(employee("manav",5000,500));

    for(int i=0;i<employees.size();i++){
        employees[i].Get_Data();
        cout << endl;
    }
    return 0;
}
#include <iostream>
#include <cmath>
#include <string>
using namespace std;
class loan{
    int loanID;
    string name;
    float loanAmount;
    float interestRate;
    int duration;
    float emi;
    public:
    loan(): loanID(0),name("NULL"),loanAmount(0.0),interestRate(0.0),duration(0),emi(0.0){}
    loan(int loanID,string name,float loanAmount,float interestRate,int duration,float emi):loanID(loanID),name(name),loanAmount(loanAmount),interestRate(interestRate),duration(duration),emi(emi){}
    void displaydata(){
        cout<<"Loan ID: "<<loanID<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Loan Amount: "<<loanAmount<<endl;
        cout<<"Interest Rate: "<<interestRate<<endl;
        cout<<"Duration: "<<duration<<endl;
        cout<<"EMI: "<<emi<<endl;
    }
    void calculateEMI(){
        emi = (loanAmount*interestRate*pow(1+interestRate,duration))/(pow(1+interestRate,duration)-1);
    }
};
int main(){
    loan loan(1,"Rahul",100000,0.1,12,0.0);
    loan.calculateEMI();
    loan.displaydata();
    return 0;
}
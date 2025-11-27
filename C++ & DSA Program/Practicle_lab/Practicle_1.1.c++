#include<iostream>
#include<string.h>
using namespace std;

class Bank_Account {
    private:
        string Account_Holder_name;
        string accountnumber;
        int Account_balance;

    public:
    Bank_Account(string name, string account_number, int balance){
        Account_Holder_name = name;
        accountnumber = account_number;
        Account_balance = balance;
    }
};

void deposit(int amount){
   if(amount<0){
         cout<<"Invalid amount";
    }
    else{
         Account_balance += amount;
    }
}

void withdraw(int amount){
    if(amount>Account_balance){
        cout<<"Insufficient balance";
    }
    else{
        Account_balance -= amount;
    }

int main(){
    Bank_Account M1("Manav","9913576750",5000);
    Bank_Account M2("Manav","9913576750",6000);
}

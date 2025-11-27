#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Bank_Account{
    private:
   int account_number;
   string name;
   int balance;
   static int total_Account;
   public:

   void display_data(){
    cout<<"Account Number: "<<account_number<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Balance: "<<balance<<endl;
   }
   Bank_Account(int accno,string name,int balance):
   account_number(accno),name(name),balance(balance){
         total_Account++;
   }
   static int total_account(){
       return total_Account;
   }
   friend void transfer_money(Bank_Account &a,Bank_Account &b,int amount);
};

int Bank_Account::total_Account=0;


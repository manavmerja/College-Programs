#include<iostream>
#include<string>
using namespace std;
class BankAccount{
    private:
    string name;
    int account_no;
    double balance;
    public:
    BankAccount();
    BankAccount(string name,int account_no,double balance);
    void displaydata();
    void deposit(double amount);
    void withdraw(double amount);
};
BankAccount::BankAccount():name("NULL"),account_no(0),balance(0.0){}
BankAccount::BankAccount(string name,int account_no,double balance):name(name),account_no(account_no),balance(balance){}

void BankAccount::displaydata(){
    cout<<"Name: "<<name<<endl;
    cout<<"Account no: "<<account_no<<endl;
    cout<<"Balance: "<<balance<<endl;
}

void BankAccount::deposit(double amount){
    if(amount>0){
        balance+=amount;
        cout<<"Amount deposited successfully: "<<balance <<endl;
    }
    else{
        cout<<"Invalid amount"<<endl;
    }
}
void BankAccount::withdraw(double amount){
    if(amount>0 && amount<=balance){
        balance-=amount;
        cout<<"Amount withdrawn successfully: "<<balance <<endl;
    }
    else if (amount > balance){
        cout<<"Insufficient balance"<<endl;
    }
    else{
        cout<<"Invalid amount"<<endl;
    }
}
int main(){
    BankAccount account[3];
    account[0] = BankAccount();
    account[1] = BankAccount("John",12345,1000.0);
    account[2] = BankAccount("Doe",54321,500.0);
    for(int i=0;i<3;i++){
        cout<<"Account "<<i+1<<" details: "<<endl;
        account[i].displaydata();
        account[i].deposit(100.0);
        account[i].withdraw(50.0);
    }
    return 0;
}

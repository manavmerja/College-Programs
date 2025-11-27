
#include <iostream>
#include <string>
using namespace std;
class BankAccount{
    private:
    string name;
    int account_no;
    double balance; 
    public:
    BankAccount(string name,int account_no,double balance):name(name),account_no(account_no),balance(balance){};
    void deposit(double amount){
        if(amount>0){
            balance+=amount;
            cout<<"Amount deposited successfully: "<<balance <<endl;
        }
        else{
            cout<<"Invalid amount"<<endl;
        }
    }
    void withdraw(double amount){
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
    void displaydata(){
        cout<<"Name: "<<name<<endl;
        cout<<"Account no: "<<account_no<<endl;
        cout<<"Balance: "<<balance<<endl;
    }
};
int main(){
    string name;
    int account_no;
    double balance; 
    cout<<"Enter name: ";
    getline(cin,name);
    cout<<"Enter account no: ";
    cin>>account_no;
    cout<<"Enter balance: ";
    cin>>balance;
    BankAccount A1(name,account_no,balance);
    A1.displaydata();

    double amount;
    cout<<"Enter amount to deposit: ";
    cin>>amount;
    A1.deposit(amount);

    double withdraw_amount;
    cout<<"Enter amount to withdraw: ";
    cin>>withdraw_amount;
    A1.withdraw(withdraw_amount);
    return 0;
}
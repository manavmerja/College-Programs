#include<iostream>
using namespace std;
class A{
    public:
    void printA(){
        cout<<"Inside Class A"<<endl;
    }
};

class B : public A{
    public:
    void publicB(){
        cout<<"inside class B"<<endl;
    }
};

class c : public A{
    public:
    void print(){
        cout<<"inside class c"<<endl;
    }
};

int main(){
    c aa;
    aa.print();
    aa.printA();
    return 0;
}

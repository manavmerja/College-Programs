#include<iostream>
using namespace std;
class A{
    protected:
        int a;
        public:
        void inputa(){
            cout<<"Enter the value of a: ";
            cin>>a;
        }
};
class B:public A{
    protected:
        int b;
        public:
        void inputb(){
            cout<<"Enter the value of b: ";
            cin>>b;
        }
        void add(){
            cout<<"addition of a and b is: "<<a+b<<endl;
        }
};
int main(){
    B b1;
    b1.inputa();
    b1.inputb();
    b1.add();
    return 0;
}


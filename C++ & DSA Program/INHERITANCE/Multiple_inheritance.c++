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
class B{
    protected:
        int b;
        public:
        void inputb(){
            cout<<"Enter the value of b: ";
            cin>>b;
        }
};
class C:public A,public B{
    public:
        void add(){
            cout<<"addition of a and b is: "<<a+b<<endl;
        }
};  

int main(){
    C c1;
    c1.inputa();
    c1.inputb();
    c1.add();
    return 0;
}
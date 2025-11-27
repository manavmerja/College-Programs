#include<iostream>
using namespace std;
class A{
    protected:
    int a;
    public:
    void getdata(){
        cout<<"Enter the value of a: ";
        cin>>a;
    }
};

class B: public A{
    protected:
    int b;
    public:
    void getdata1(){
        cout<<"Enter the value of b: ";
        cin>>b;
    }
};

class c : public B{
    protected:
    int c;
    public:
    void putdata(){
        c=a+b;
        cout<<"Addition= " <<c;
    }
};

int main(){
    c obj;
    obj.getdata();
    obj.getdata1();
    obj.putdata();
    return 0;
}

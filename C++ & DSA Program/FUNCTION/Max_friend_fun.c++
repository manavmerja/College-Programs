#include<iostream>
#include<conio.h>
using namespace std;
class B;
class A{
    private:
    int a;
    public:
    void input(){
        cout<<"Enter the value of a: ";
        cin>>a;
    }
    friend void max(A,B);
};
class B{
    private:
    int b;
    public:
    void input(){
        cout<<"Enter the value of b: ";
        cin>>b;
    }
    friend void max(A,B);
};
void max(A aa, B bb){
    if(aa.a>bb.b){
        cout<<"Max value is: "<<aa.a;
    }
    else{
        cout<<"Max value is: "<<bb.b;
    }
}
int main(){
    A aa;
    B bb;
    aa.input();
    bb.input();
    max(aa,bb);
    getch();
    return 0;
}
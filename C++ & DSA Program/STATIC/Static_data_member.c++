#include<iostream>
#include<conio.h>
using namespace std;
class demo{
    private: 
    int x,y;
    static int z;
    public:
    void getdata(){
        cout<<"Enter the value of x and y: ";
        cin>>x>>y;
        z++;
    }
    void putdata(){
        cout<<"Value of x: "<<x<<endl;
        cout<<"Value of y: "<<y<<endl;
        cout<<"static value: "<<z<<endl;
    }
};
int demo::z;
int main(){
    demo aa,bb;
    aa.getdata();
    bb.getdata();
    aa.putdata();
    bb.putdata();
    getch();
    return 0;
}
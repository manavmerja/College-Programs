#include<iostream>
#include<conio.h>
using namespace std;
class demo{
    private:
    int a;
    public:
    void getdata(){
        cout << "Enter a number: ";
        cin >> a;
    }
    void display(){
        cout <<"\n"<< a;
    }
};
int main(){
    demo aa[10];
    for(int i=0; i<10; i++){
        aa[i].getdata();
    }
    for(int i=0; i<10; i++){
        aa[i].display();
    }
    getch();
    return 0;
}
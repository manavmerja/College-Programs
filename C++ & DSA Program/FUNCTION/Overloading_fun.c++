#include<iostream>
#include<conio.h>
using namespace std;
void add (int, int);
void add (int, int, int);
void adds (int,float);
int main (){
    add(10,20);
    add(10,20,30);
    adds(10,20.5);
    getch();
    return 0;
}

void add (int a, int b){
    cout << "Sum of two integer numbers: " << a+b << endl;
}
void add (int a, int b, int c){
    cout << "Sum of three integer numbers: " << a+b+c << endl;
}
void adds (int a, float b){
    cout << "Sum of integer and float numbers: " << a+b << endl;
}

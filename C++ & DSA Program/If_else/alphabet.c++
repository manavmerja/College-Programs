#include<iostream>
using namespace std;
int main() {
    char ch;
    cout<<"enter the character: ";
    cin>>ch;
    int ascii =ch;
    if(ascii>=65 && ascii<=90){
        cout<<"The character is uppercase";
    }
    else if(ascii>=97 && ascii<=122){
        cout<<"The character is lowercase";
    }
    else{
        cout<<"The character is not an alphabet";
    }
    return 0;
}
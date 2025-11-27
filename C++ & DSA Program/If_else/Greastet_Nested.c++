#include<iostream>
using namespace std;
int main() {
    int a;
    cout<<"Enter the number: ";
    cin>>a;
    int b;
    cout<<"Enter the number: ";
    cin>>b;
    int c;
    cout<<"Enter the number: ";
    cin>>c;
    if(a>b){
        if(a>c){
            cout<<a<<" is the greasted";
            }
        else{
            cout<<c<<" is the greasted";
            }
        }
    else{
        if(b>c){
            cout<<b<<" is the greasted";
        }
        else{
            cout<<c<<" is the greasted";
            }

        }
    return 0;
}
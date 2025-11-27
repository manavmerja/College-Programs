#include <iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"enter the value of a and y: ";
    cin>>x>>y;
    if(x==0 && y==0){
        cout<<"point lies on origin";
    } 
    else if(x==0){
        cout<<"point lies on y-axis";
    }
    else if(y==0){
        cout<<"point lies on x-axis";
        }
    else if(x>0 && y>0){
        cout<<"point lies in first quadrant";
    }
    else if(x<0 && y>0){
        cout<<"point lies in second quadrant";
    }
    else if(x<0 && y<0){
        cout<<"point lies in third quadrant";
    }
    else if(x>0 && y<0){
        cout<<"point lies in fourth quadrant";
    }
    return 0;
}
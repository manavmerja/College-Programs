#include<iostream>
#include<cmath>
using namespace std;
class Rectangle{
    private:
    int length, breadth;
    public:
    void setdimension(int l,int w){
        length=l;
        breadth=w;
    }
    int area(){
        return length*breadth;
    }
    int perimeter(){
        return 2*(length+breadth);
    }
};
int main(){
   int length,breadth;
    cout<<"Enter length: ";
    cin>>length;
    cout<<"Enter breadth: ";
    cin>>breadth;
    Rectangle R1;
    R1.setdimension(length,breadth);
    cout<<"Area: "<<R1.area()<<endl;
    cout<<"Perimeter: "<<R1.perimeter()<<endl;
    return 0;
}
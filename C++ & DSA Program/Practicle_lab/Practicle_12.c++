#include<iostream>
using namespace std;
class Rectangle{
    private:
        int length;
        int breadth;
    public:
    void set_diamension(int L,int B){
        length=L;
        breadth=B;
    }
    int area(){
    return length*breadth;
    }

    int peri_meter(){
        return 2*(length+breadth);
    }
};

int main(){
    Rectangle r1;
    r1.set_diamension(10,5);
    cout<<"Area of rectangle is: "<<r1.area()<<endl;
    cout<<"Perimetre of rectangle is: "<<r1.peri_meter()<<endl;
    Rectangle r2;
    r2.set_diamension(20,10);
    cout<<"Area of rectangle is: "<<r2.area()<<endl;
    cout<<"Perimetre of rectangle is: "<<r2.peri_meter()<<endl;
    return 0;
}
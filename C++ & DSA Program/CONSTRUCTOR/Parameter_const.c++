#include<iostream>
using namespace std;

class A{
    private:
    int a;
    public:
    A(int x){
        a=x;
    }
    void put_data(){
        cout<<"Value of a: "<<a<<endl;
    }
};

int main(){
    A obj(10);
    obj.put_data();
    return 0;
}
#include<iostream>
#include<list>
using namespace std;
class A{
    private:
    int a;
    public:
    A(){
        cout<<"Default constructor called"<<endl;
        a=10;
    }
    void put_data(){
        cout<<"Value of a: "<<a<<endl;
    }
};
int main(){
    A obj;
    obj.put_data();
    return 0;
}
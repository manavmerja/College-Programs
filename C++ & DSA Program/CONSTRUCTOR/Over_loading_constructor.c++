#include<iostream>
using namespace std;

    class demo{
        private:
        int a;
        public:
        demo(){
            a=10;
            cout<<"Default constructor called"<<endl;
        }
        demo(int x){
            a=x;
            cout<<"Parameterized constructor called"<<endl;
        }
        demo(demo &d){
            a=d.a;
            cout<<"Copy constructor called"<<endl;
        }
        void display(){
            cout<<"Value of a: "<<a<<endl;
        }
    };
    int main(){
        demo aa;
        demo bb(20);
        demo cc(aa);
        aa.display();
        bb.display();
        cc.display();
        return 0;
    }


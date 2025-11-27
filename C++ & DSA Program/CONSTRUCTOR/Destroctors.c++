#include<iostream>
#include<string>
using namespace std;
int count=0;
class demo{
    public:
    demo(){
        count++;
        cout<<"Object created: "<<count<<endl;
    }
    ~demo(){
        cout<<"Object destroyed: "<<count<<endl;
        count--;
    }
};

int main(){
    demo aa,bb,cc;
    {
        demo dd;
    }
    return 0;
}
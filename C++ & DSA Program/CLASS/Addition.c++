#include<iostream>
#include<conio.h>
using namespace std;
class addition{
    private:
    int a,b;
    public:
    void getdata(){
        cout <<"Enter two numbers: ";
        cin >> a >> b;
    }
    void putdata(){
        cout << "addition: "<< a+b;
    }
};
int main(){
    addition aa;
    aa.getdata();
    aa.putdata();
    getch();
    return 0;
}

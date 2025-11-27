#include<iostream>
#include<conio.h>
using namespace std;
class demo{
    private:
    int a,b;
    public:
    void getdata();
    friend int sum(demo);
};
void demo::getdata(){
    cout << "Enter two numbers: ";
    cin >> a >> b;
}
int sum(demo aa){
    return aa.a+aa.b;
}
int main(){
    demo aa;
    aa.getdata();
    cout << "Sum: " << sum(aa);
    getch();
    return 0;
}
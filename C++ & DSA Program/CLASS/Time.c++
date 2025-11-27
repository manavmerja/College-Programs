#include<iostream>
#include<conio.h>
using namespace std;
class time{
    private:
    int h,m;
    public:
    void getdata(){
       cout<<"Enter hour and minute: ";
       cin>>h>>m;
    }
    void putdata(){
        cout<<"Hour: "<<h<<" Minute: "<<m<<endl;
    }
    void add(time t1, time t2){
        h=(t1.m+t2.m)/60;
        m=(t1.m+t2.m)%60;
        h=h+t1.h+t2.h;
    }
};
int main(){
    time t1,t2,t3;
    t1.getdata();
    t2.getdata();
    t3.add(t1,t2);
    t1.putdata();
    t2.putdata();
    t3.putdata();
    getch();
    return 0;
}
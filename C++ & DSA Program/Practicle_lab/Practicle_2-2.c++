#include<iostream>
#include<string>
using namespace std;

class student{
    private:
    string name;
    int roll_no;
    int marks[3];
    public:
    student():roll_no(0),name("NULL"){
        for(int i=0;i<3;i++){
            marks[i]=0;
        }
    }
    student(int roll_no,string n,int m1,int m2,int m3): roll_no(roll_no),name(n){
        marks[0]=m1;
        marks[1]=m2;
        marks[2]=m3;
    }
    void displaydata(){
        cout<<"Name: "<<name<<endl;
        cout<<"Roll no: "<<roll_no<<endl;
        cout<<"Marks: "<<marks[0]<< ", "<<marks[1]<< ", "<<marks[2]<<endl;
    }
    double average(){ 
        return  (marks[0]+marks[1]+marks[2])/3.0; 
    }
};

int main(){
    student students[3];
    students[0] = student(); 
    students[1] = student(1,"Rahul",90,80,70);
    students[2] = student(2,"Rohit",80,70,60);
    for(int i=0;i<3;i++){
        cout<<"Student "<<i+1<<" details: "<<endl;
        students[i].displaydata();
        cout<<"Average marks: "<<students[i].average()<<endl;
    }
    return 0;
}
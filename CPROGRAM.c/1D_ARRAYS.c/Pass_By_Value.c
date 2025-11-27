#include<stdio.h>
void display1 (int);
void display2 (int*);

int main(){
    int marks[] ={45,56,52,23};
    for(int i;i<=3;i++){
        display1(marks[i]);
    }
    for(int i;i<=3;i++){
        display2(&marks[i]);
    }
    return 0;
    void display1(int m);
    {
        int m;
        printf("%d",m);
    }

    void display2(int *n);
    {
        int *n;
        printf("%d",*n);
    }
    return 1;
}
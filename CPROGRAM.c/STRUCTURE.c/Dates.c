#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
    typedef struct Dates
    {
        int day;
        int months;
        int year;
    } Dates;
    Dates a,b;

    a.day=15;
    a.months=6;
    a.year=1999;

    b.day=17;
    b.months=10;
    b.year=2006;

    bool flag = true;
    if(a.day!=b.day) flag = false;
        if(a.months!=b.months) flag = false;
    if(a.year!=b.year) flag = false;

    if(flag == true) printf("The date are same");
    else{
        printf("the dates are different");
    }
return 0;
    
}
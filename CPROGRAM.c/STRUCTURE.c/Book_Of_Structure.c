#include<stdio.h>
#include<string.h>
int main(){
    struct book
    {
        char name[50];
        int no_ofpages;
        float price;
    } a,b;

    a.no_ofpages=100;
    a.price=20.50;
    strcpy(a.name,"Introduction to C");

    b.no_ofpages=120;
    b.price=25.50;
    strcpy(b.name,"Data Structures");

    printf("%s\n",b.name);
    printf("%s",a.name);
    return 0;
    
}
#include<stdio.h>
typedef int* int_pointer;
int main(){
    int x=5,y=7;
    int_pointer p1=&x,p2=&y;
    printf("%p %p",*p1,*p2);
    return 0;
}
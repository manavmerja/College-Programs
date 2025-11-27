#include<stdio.h>
void swap(int*a,int*b)
{
   int temp=*a;
   *a=*b;
   *b=temp;
}

int main(){
    int a = 10;
    int b = 5;
    printf("\nBefore swaping: a=%d, b=%d\n",a,b);

    swap(&a, &b);

    printf("after swaping: a=%d, b =%d\n",a,b);

    return 0;
}
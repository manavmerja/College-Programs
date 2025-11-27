#include<stdio.h>
int main(){
    int sum = 0;
    int marks[5] = {88,95,56,76,85};
    for(int i=0;i<=5;i++)
    {
       sum = sum + marks[4];
    }
    printf("%d",sum);
    return 0;
}
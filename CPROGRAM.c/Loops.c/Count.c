#include<stdio.h>
int main(){
    int number,length=0,sum=0,digit,result;
    printf("Enter a number:");
    scanf("%d",&number);
    while(number !=0){
        result=number%10;
        number=number/10;
        sum+=result;
        length++;
    }
    printf("Sum of digits of the number is %d\n",sum);
        printf("length of the number is %d",length);
        return 0;

}
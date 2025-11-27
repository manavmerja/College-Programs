#include<stdio.h>
#include<math.h>
int main(){
    int number,result,reminder,sum=0;
    printf("Enter the number: ");
    scanf("%d", &number);
    int originalNumber = number;
    while(number !=0){
        reminder = number % 10;
        result= reminder * reminder * reminder;
        sum = sum+result;
        number=number/10;
    }
    if(originalNumber== sum){
        printf("The number is Armstrong number\n");
    }
    else{
        printf("The number is not Armstrong number\n");
    }
    return 0;
}
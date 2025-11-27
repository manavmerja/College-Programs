#include<stdio.h>
int main (){
    //This program is Written By 24DCE074_MANAV_MERJA
    int marks;
    printf("Enter your marks: ");
    scanf("%d",&marks);
    if (marks<0 || marks>100){
        printf("Marks should be (0-100)");
    }else if (marks>=90 && marks<=100){
        printf("your grade is :'A' ");
    }else if (marks>=80 && marks<=89){
        printf("your grade is : 'B' ");
    }else if (marks>=70  && marks<=79){
        printf("your marks is :'C' ");
    }else if (marks>=60 && marks<=69){
        printf("your grade is : 'D' ");
    }else {
        printf("Better luck next time");
    }
return 0;
}
#include<stdio.h>
int main(){
    int avg,sum = 0,marks[5];
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter the marks of student:%d ",i+1);
        scanf("%d",&marks[i]);
        sum+=marks[i];
    }
    avg=sum/n;
    printf("Average of marks is: %d",avg);
    return 0;
}
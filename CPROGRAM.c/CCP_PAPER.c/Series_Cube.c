#include<stdio.h>
int main(){
    int n,sum = 0;
    printf("Enter the first number: ");
    scanf("%d",&n);

    if(n<1){
        printf("Correct code");
        return 1;
    }
    for(int i=2;i<=n;i+=2){
        sum=sum+(i*i*i);

    }
    printf("sum=%d\n",sum);
    return 0;
}
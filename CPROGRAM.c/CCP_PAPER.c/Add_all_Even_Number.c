#include<stdio.h>
int main(){
    int n1,n2,sum = 0;
    printf("Enter the first number: ");
    scanf("%d",&n1);
    printf("Enter the second number: ");
    scanf("%d",&n2);

    if(n1>n2){
        int temp=n1;
        n1=n2;
        n2=temp;
    }
    for(int i=n1;i<=n2;i++){
        if(i%2 ==0){
            sum=sum+i;
        }
    }
    printf("The sum of %d to %d is: %d\n",n1,n2,sum);
    return 0;
}
#include<stdio.h>
int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    if(num<1){
        printf("invalid");
    }
    printf("Enter to 1 to n\n");
    for(int i=num;i>=1;i--){
        printf(" %d",i);
    }
    printf("\n");
    return 0;
}
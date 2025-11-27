#include<stdio.h>
int main(){
    int arr1[5],arr2[5],i,j;
    printf("\nEnter the five element: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr1[i]);
    }
    for(i=0,j=4;i<=4;i++,j--){
        arr2[j]=arr1[i];
    }
    printf("\nReverse ordeer:\n");
    for(i=0;i<5;i++){
        printf("%d ",arr2[i]);
    }
    return 0;
}
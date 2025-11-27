#include<stdio.h>
int main(){
    int arr[100],n;
    int number,count=0;
    printf("Enter a number occurrance: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        printf("arr[%d]: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Find the the number the occurrance is: ");
    scanf("%d",&number);

    for(int i=0;i<number;i++){
        if(number==arr[i]){
            count++;
        }
    }
    printf("The number %d occurs %d times in the array.\n",number,count);
    return 0;
}
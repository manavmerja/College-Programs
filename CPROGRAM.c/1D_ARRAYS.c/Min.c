#include<stdio.h>
#include<limits.h>
int main(){
    int arr[7]={56,41,20,52,96,23,47};
    int min = INT_MAX;             //int max = arr[0];

    for(int i=0;i<=7;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    printf("%d ",min);
    return 0;
}
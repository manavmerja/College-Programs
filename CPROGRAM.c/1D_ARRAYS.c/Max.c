#include<stdio.h>
#include<limits.h>
int main(){
    int arr[7]={56,41,20,52,96,23,101};
    int max = INT_MIN;             //int max = arr[0];

    for(int i=0;i<=7;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    printf("%d ",max);
    return 0;
}
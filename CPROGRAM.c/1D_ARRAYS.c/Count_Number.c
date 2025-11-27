#include<stdio.h>
int main(){
    int arr[7] = {1,5,5,6,7,1,8};
    int x=4;
    int count=0;
    for(int i=0;i<=6;i++){
        if(arr[i]>x){
          count++;
          
    }
}
printf("%d",count);
return 0;
}
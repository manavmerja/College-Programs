#include<stdio.h>
int main(){
    int arr[7] = {1,5,5,6,7,1,8};
    int sumeven = 0;
    int sumodd = 0;
    int result;

    for(int i=0;i<=6;i++){
        if(i%2 == 0){
          sumeven=sumeven+arr[i];
    }else{
        sumodd=sumodd+arr[i];
    }
}
result = sumeven-sumodd;
printf("%d",result);
return 0;
}
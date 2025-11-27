#include<stdio.h>
int main(){
    int arr[8] = {1,2,3,4,5,6,7,8};
    int Total_Pair=0;
    int x=12;

    for(int i=0;i<8;i++){
        for(int j=i+1;j<8;j++){
            if(arr[i] + arr[j] ==x){
                printf("(%d,%d)\n",arr[i],arr[j]);
                Total_Pair++;
                
          }
    }
}
printf("%d",Total_Pair);
return 0;
}

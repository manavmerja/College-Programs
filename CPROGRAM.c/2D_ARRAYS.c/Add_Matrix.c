#include<stdio.h>
int main(){
    int arr[2][2] = {4,6,1,2};
    int brr[2][2] = {3,4,2,4};
printf("\n");
     int result[2][2];
for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            result[i][j] = arr[i][j] + brr[i][j];
    }
    printf("\n");
}

for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d ",result[i][j]);
    }
    printf("\n");
}
return 0;
}
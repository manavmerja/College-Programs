#include<stdio.h>
int main(){
    int r;
    printf("Enter the rows: ");
    scanf("%d",&r);

    int c;
    printf("Enter the colums: ");
    scanf("%d",&c);

    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("Enter the element at row %d and column %d: ",i+1,j);
            scanf("%d",&arr[i][j]);
    }
    }
    printf("\n");

    int sum=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            sum=sum+arr[i][j];
}
    }
    printf("Sum of all elements in the array is: %d\n",sum);
    return 0;
}

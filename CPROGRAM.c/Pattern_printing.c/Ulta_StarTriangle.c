#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+1-i;j++){
            printf("* ");
    } 
    printf("\n");
}
}
// n=3;
// 1) * * * (3 
// 2) * * (2
// 3) * (1

// i+j=n+1;
// j=n+1-i;
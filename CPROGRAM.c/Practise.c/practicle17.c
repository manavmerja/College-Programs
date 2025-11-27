#include<stdio.h>
int main(){
    int rows,seats,i,j,k,n,i1,j1;
    char a[5][10];

    for(rows=0;rows<5;rows++){
        for(seats=0;seats<10;seats++){
            a[rows][seats]='X';
            printf("%c ",a[rows][seats]);
    }
    printf("\n");
}
printf("Enter number of seats reaserd is: ");
scanf("%d",&n);

for(k=0;k<n;k++){
    printf("Enter the rows and seats reseved is %d",k+1);
    scanf("%d %d", &i,&j);

    i1=i-1;j1=j-1;a[i1][j1]='0';

    for(i1=0;i1<5;i1++){
        for(j1=0;j1<10;j1++){
            printf("%c ",a[i1][j1]);
        }
        printf("\n");
    }
}
return 0;

}
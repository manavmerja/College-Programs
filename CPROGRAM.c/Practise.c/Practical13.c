#include<stdio.h>
int main()
{
    int Vertical,Horizontal;
    printf("Enter the number of vertical: ");
    scanf("%d",&Vertical);
    
 printf("Enter the number of horizontal: ");
    scanf("%d",&Horizontal);

    for(int i=1;i<=Vertical;i++){
        for(int j=1;j<=Horizontal;j++){
            printf("%6d",i*j);
    }
    printf("\n");
    
}
return 0;
}
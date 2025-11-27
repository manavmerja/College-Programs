#include<stdio.h>
#include<math.h>
int main(){
    int length,width,flagestone;
    printf("Enter the length of the rectangle: ");
    scanf("%d",&length);
    printf("Enter the width of the rectangle: ");
    scanf("%d",&width);
    printf("Enter the size of the flagstone: ");
    scanf("%d",&flagestone);

int area = (length+flagestone-1)/flagestone * (width+flagestone-1)/flagestone;
printf("The number of flagstone required is: %d\n", area);
return 0;
}
#include<stdio.h>
struct length{
    int cm;
    int mm;
};
int main(){
    struct length l1,l2,result;
    printf("Enter the first measurment: ");
    scanf("%d%d",&l1.cm,&l1.mm);
    printf("Enter the second measurment: ");
    scanf("%d%d",&l2.cm,&l2.mm);

    result.cm=l1.cm+l2.cm;
        result.mm=l1.mm+l2.mm;

        printf("Result is %d and %d",result.cm,result.mm);
        return 0;


}

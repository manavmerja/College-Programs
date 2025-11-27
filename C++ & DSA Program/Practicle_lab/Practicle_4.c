#include<stdio.h>
#include<math.h>
int main(){
    int num_1,num_2,HCF,LCM,original_num_1,original_num_2;
    printf("Enter the first number:");
    scanf("%d", &num_1);
    original_num_1 = num_1;
    printf("Enter the second number:");
    scanf("%d", &num_2);
    original_num_2 = num_2;
    while(num_1 != num_2){
        if(num_1 > num_2){
            num_1 = num_1 - num_2;
        }
        else{
            num_2 = num_2 - num_1;
        }
    }
    HCF = num_1;
    LCM = (original_num_1 * original_num_2) / HCF;
    printf("The LCM of the number is: %d\n", LCM);
    return 0;
}
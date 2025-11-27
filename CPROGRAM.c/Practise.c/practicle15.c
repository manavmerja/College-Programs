#include<stdio.h>
int main(){

    //This practicle is written by 24DCE074_MANAV_MERJA
    int number[25];
    int positive_number = 0,negative_number = 0;
    int Even_number = 0,odd_number = 0;

    printf("Enter the number:\n");

    for(int i = 0;i<25;i++){
        scanf("%d",&number[i]);

        if (number[i]>0){
            printf("positive number\n");
        }else if (number[i]<0)
        {
            printf("negative number\n");
        }

        if(number[i] % 2 ==0){
            printf("even number\n");
        }
        else{
            printf("odd number\n");
        }
        }
        return 0;
    }


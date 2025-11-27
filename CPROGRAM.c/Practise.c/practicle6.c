#include<stdio.h>
//This Program is Writtrn By 24DCE074_MANAV_MERJA
int main(){
    int num_1,num_2,result;
    char opreater;

    printf("Enter the two number: ");
    scanf("%d %d",&num_1,&num_2);

    printf("Enter the operater: ");
    scanf(" %c",&opreater);

    switch (opreater)
    {
    case ('+'):
        result = num_1 + num_2;
        printf("result = %d\n",result);
        break;

        case ('-'):
        result = num_1 - num_2;
        printf("result = %d\n",result);
        break;

        case ('*'):
        result = num_1 * num_2;
        printf("result = %d\n",result);
        break;

        case('/'):
        if (num_2 != 0){
            result = num_1/num_2;
            printf("result = %d\n",result);
        }else {
            printf("Error:the num_2 diviod by zero\n");
        }
        break;
    default:
    printf("Error:invalid operator");
        break;
    }
    return 0;
}
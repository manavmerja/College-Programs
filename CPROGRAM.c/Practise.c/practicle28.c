#include<stdio.h>
int main(){
    int student[10],FALL=0,FIRST_CLASS=0,PASS=0,DISTINCTION=0;

    for(int i=0;i<=10;i++){
        printf("Enter the student marks: ");
        scanf("%d",&student[10]);
    }

    for(int i=0;i<10;i++){

        if (*(student+i)>=70){
            DISTINCTION++;
        }

        else if(*(student+i)>=60 && *(student+i)<70){
            FIRST_CLASS++;
        }

        else if(*(student+i)>=40 && *(student+i)<60){
           PASS++;
        }
         else{
                FALL++;
         }
    }
    printf("\nDISTINCTION is %d",DISTINCTION);
    printf("\nFIRST_CLASS is %d",FIRST_CLASS);
    printf("\nPASS is %d",PASS);
    printf("\nFALL is %d",FALL);

    return 0;

}


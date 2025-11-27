#include<stdio.h>
//this code is wrriting by 24DCE074_MANAV_MERJA
int main(){
    int start_day;
    int End_day = 100;
    int Day_cost=200;
    int Total_Budght=0;

    for(int start_day=2;start_day<=End_day;start_day +=2){
        Total_Budght += Day_cost;
    }

    printf("Total Budght is : %d\n", Total_Budght);
    return 0;
}
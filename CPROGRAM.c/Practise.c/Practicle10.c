#include<stdio.h>
#include<string.h>
//This program is Written By 24DCE074_MANAV_MERJA
int main(){
    int second;
    printf("Enter the second: ");
    scanf("%d", &second);
    while (second>0)
    {
        printf("%d\n",second);
        sleep(1);
        second--;
    }
    printf("\nCountdown completed");
    return 0;
}
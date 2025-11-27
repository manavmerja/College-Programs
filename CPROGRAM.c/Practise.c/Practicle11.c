#include<stdio.h>
int main (){

    // this code wrriting by 24DCE074__MANAV_MERJA

    int user,computer,sticks = 21; 
    printf("Welcome to the game of sticks!\n");
    printf("You will play against the computer.\n");
    printf("The game will start with 21 sticks.\n");
    printf("you will pickup matchstick Between 1 to 4.\n");

    while (sticks>0) // Loop is exucting while sticks is greater than zero
    {
         printf("select matchstick: ");
        scanf("%d",&user);

        if (user<1  || user>4)

        {
            printf("invalied\n");
            continue;
        }
        printf("you select %d match stick\n",user);
        sticks = sticks - user;

        printf("Remering sticks is %d\n",sticks);
        computer = 5 - user; //Computer pickup the match stick 

        printf("computer pickup %d sticks\n",computer);
        sticks= sticks-computer;

        printf("Remering sicks is %d\n",sticks); 

        if(sticks==1){
            printf("remering sticks is %d\n",sticks);
            printf("you lost the game\n");
            break;
        }

    }
    return 0;
}
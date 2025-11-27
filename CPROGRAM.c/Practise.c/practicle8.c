#include<stdio.h>
//This program is Writtern By 24DCEO74_MANAV_MERJA
int main(){
    int choice;
    int totle_price = 0;
    printf("Enter MMR restuntment\n");
    printf("Menu\n");
    printf("burger = 150\n");
    printf("Pizza = 200\n");
    printf("Pasta = 120\n");
    printf("Sandwich = 100\n");
    printf("French Fire = 80\n");
    printf("Enter order 0 to finish\n");

    while(1){

            scanf("%d",&choice);

        switch(choice){
            case 1:
            totle_price += 150;
            printf("Added to burger order is %d\n",totle_price);
            break;

            case 2:
            totle_price += 200;
            printf("Added to Pizza order is %d\n",totle_price);
            break;

            case 3:
            totle_price += 120;
            printf("Addad to pasta order is %d\n",totle_price);
            break;

            case 4:
            totle_price += 100;
            printf("Added to Sandwich order is %d\n",totle_price);
            break;

            case 5:
            totle_price += 80;
            printf("Added to French Fire order is %d\n",totle_price);
            break;
            
            case 0:
            printf("Your total_price is %d",totle_price);
            break;

            default:
            printf("Enter corrent order,try again\n");

    }

} 
return 0;
}
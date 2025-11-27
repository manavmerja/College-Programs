#include<stdio.h>
#include<string.h>

typedef struct Cricketer
{
    char name[15];
    int age;
    int no_of_matches;
    int averge;
} Cricketer;

Cricketer arr[3];
for(int i=0;i<3;i++){
    scanf("%[^\n]",arr[i].name);
        scanf("%d",&arr[i].age);
    scanf("%d",&arr[i].no_of_matches);
    scanf("%d",&arr[i].averge);
}

for(int i=0;i<3;i++){
    printf("Name: %s\n",arr[i].name);
        printf("Age: %d\n",arr[i].age);
    printf("No_Of_mathes: %d\n",arr[i].no_of_matches);
    printf("Averge: %d\n",arr[i].averge);
}
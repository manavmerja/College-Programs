#include<stdio.h>
#include<string.h>
int main(){
    char string[50];
    printf("Enter the string: ");
    fgets(string, sizeof(string), stdin);
    int length = 0;
    for(int i = 0; string[i] != '\0'; i++){
        length++;
    }
    printf("The length of the string is: %d\n", length);
    return 0;
}
#include<stdio.h>
int main(){
    char string[50];
    printf("Enter the string: ");
    fgets(string, sizeof(string), stdin);
    int length = 0; 
    for(int i=0; string[i] !=0;i++){
        length++;
    }
    for(int i=0; string[i] !=0;i++){
        if(string[i] >= 65 && string[i] <= 90){
            string[i] = string[i] + 32;
        }
        if(string[i] >= 97 && string[i] <= 122){
            string[i] = string[i] - 32;
        }
    }
    printf("The length of the string is: %d\n", length);
    printf("The string is: %s\n", string);
    return 0;
}
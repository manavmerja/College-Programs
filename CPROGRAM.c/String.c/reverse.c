#include<stdio.h>
int main(){
    char str[40];
    puts("Enter the string");
    scanf("%[^\n]s",str);

    int size = 0;
    int k = 0;
    while(str [k]!=0){
        size ++;
        k++; 
    }
    for(int i=0,j=size-1;i<=j;i++,j--){
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    printf("the revers string is: ");
    puts(str);
    return 0;
}
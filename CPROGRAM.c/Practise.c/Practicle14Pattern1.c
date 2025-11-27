#include<stdio.h>

int main () {
    // Declare a variable to hold the number of rows
    int rows;
    printf("Enter number\n: ");
    scanf("%d", &rows);
    // Outer loop for each row
    for(int i = 0; i < rows; i++) {
        // Inner loop for printing numbers in each row
        for(int j = 0; j <= i; j++){
            if(j % 2 == 0) {
                printf("1 ");
            } else {
                printf("0 ");
            }
        }
        // Move to the next line after finishing a row
        printf("\n");
    }
    return 0;
}
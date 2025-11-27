#include <stdio.h> 
int main() {
    int a = 5; 
    printf("Enter The Number: "); 
    scanf("%d", &a);
    
    for (int i = 1; i <= a; i++) {
        // Inner loop to print spaces for right alignment
        for (int j = i; j < a; j++) {
            printf("  "); // Print two spaces for formatting
        }
        // Inner loop to print numbers from 1 to 'i'
        for (int j = 1; j <= i; j++) {
            printf("%d ", j); 
        }
        printf("\n"); 
    }
    return 0;
}
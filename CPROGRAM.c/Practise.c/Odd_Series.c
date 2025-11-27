#include <stdio.h>

int main() {
    int n, i;
    int oddNumber;
    int sum = 0;

    // Prompt user for the number of terms
    printf("Enter the number of odd numbers to display: ");
    scanf("%d", &n);

    // Display odd numbers and calculate their sum
    printf("The first %d odd numbers are:\n", n);
    for (i = 0; i < n; i++) {
        oddNumber = 2 * i + 1; // Calculate the ith odd number
        printf("%d ", oddNumber);
        sum += oddNumber; // Add the odd number to the sum
    }

    // Display the summation of odd numbers
    printf("\nSummation of the displayed odd numbers: %d\n", sum);

    return 0;
}
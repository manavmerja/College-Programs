#include <stdio.h>

int main() {
    int array[] = {1, 2, 3, 4, 5}; // Example array
    int length = sizeof(array) / sizeof(array[0]);
    int product = 1;

    for (int i = 0; i < length; i++) {
        product *= array[i];
    }

    printf("The product of all elements in the array is: %d\n", product);
    return 0;
}
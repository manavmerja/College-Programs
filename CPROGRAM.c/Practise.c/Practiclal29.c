#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *str;
    int initialSize = 20;
    int newSize = 40;

    // Allocate memory using calloc
    str = (char *)calloc(initialSize, sizeof(char)); 
    if (str == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Copy a string into the allocated memory
    strcpy(str, "Hello, World!");

    // Print the original string
    printf("Original string: %s\n", str);

    // Reallocate memory to store a larger string
    str = (char *)realloc(str, newSize * sizeof(char));
    if (str == NULL) {
        printf("Memory reallocation failed.\n");
        return 1;
    }

    // Append more text to the string
    strcat(str, " This is a longer string now.");

    // Print the modified string
    printf("Modified string: %s\n", str);

    // Free the allocated memory
    free(str);

    return 0;
}

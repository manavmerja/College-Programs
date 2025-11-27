#include<stdio.h>

int main() {
    int arr[2][2] = {4, 6, 1, 2};
    int brr[2][2] = {3, 4, 2, 4};

    // Adding brr to arr directly
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            arr[i][j] += brr[i][j]; // Modify arr directly
        }
    }

    // Printing the result stored in arr
    printf("\nResulting Matrix:\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
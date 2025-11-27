#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // Input the number of forces

    int sum_x = 0, sum_y = 0, sum_z = 0;  // Initialize sums for x, y, z components

    for (int i = 0; i < n; i++) {
        int x, y, z;
        scanf("%d %d %d", &x, &y, &z);  // Input each force vector
        sum_x += x;  // Add x component to sum_x
        sum_y += y;  // Add y component to sum_y
        sum_z += z;  // Add z component to sum_z
    }

    // Check if the sum of all components is (0, 0, 0)
    if (sum_x == 0 && sum_y == 0 && sum_z == 0) {
        printf("YES\n");  // Body is in equilibrium
    } else {
        printf("NO\n");   // Body is moving
    }

    return 0;
}
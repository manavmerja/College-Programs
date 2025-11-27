#include <stdio.h>

int main() {
    double H, L, depth;

    printf("Enter the height of the water lily above the water surface (H): ");
    scanf("%lf", &H);
    printf("Enter the distance sailed by Inessa (L): ");
    scanf("%lf", &L);

    depth = (H * H - L * L) / (2 * L);

    printf("The depth of the lake at point A is: %.2f cm\n", depth);

    return 0;
}
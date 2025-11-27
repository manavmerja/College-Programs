 #include <stdio.h>

void fibonacci_series(int n) {
    if (n <= 0) {
        printf("No terms to display.\n");
        return;
    } else if (n == 1) {
        printf("0\n");
        return;
    } else if (n == 2) {
        printf("0, 1\n");
        return;
    }

    int previous1 = 0, previous2 = 1, next_fib;
    printf("Fibonacci Series: %d, %d", previous1, previous2);

    for (int i = 2; i < n; i++) {
        next_fib = previous1 + previous2;
        printf(", %d", next_fib);
        previous1 = previous2;
        previous2 = next_fib;
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &n);

    fibonacci_series(n);
    return 0;
}
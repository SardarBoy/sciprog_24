#include <stdio.h>

// Function to generate the next Fibonacci number
void fibonacci(int *fn1, int *fn2) {
    int fn = *fn1 + *fn2;  // Calculate Fn = Fn-1 + Fn-2
    *fn2 = *fn1;           // Update Fn-2 to be Fn-1 for the next round
    *fn1 = fn;             // Update Fn-1 to be Fn
}

int main() {
    int n;
    int fn1 = 1, fn2 = 0; // Initial values (F1 = 1, F0 = 0)

    printf("Enter the number of terms for the Fibonacci series: ");
    scanf("%d", &n);

    // Validate input
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    // Print the Fibonacci series
    printf("Fibonacci series up to %d terms:\n", n);

    // Print the initial two terms
    printf("%d ", fn2);  // F0
    if (n > 1) {
        printf("%d ", fn1);  // F1
    }

    for (int i = 2; i < n; i++) {
        fibonacci(&fn1, &fn2);
        printf("%d ", fn1);
    }

    printf("\n");
    return 0;
}

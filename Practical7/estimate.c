#include <stdio.h>

double calculating_factorial(int n) {
    double fact = 1.0;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

double estimate(int order) {
    double result = 0.0;
    for (int i = 0; i <= order; i++) {
        result += 1.0 / calculating_factorial(i);
    }
    return result;
}

int main() {
    int order;
    printf("Enter the order of the polynomial (1-15): ");
    scanf("%d", &order);

    if (order < 1 || order > 15) {
        printf("Please enter an order between 1 and 15.\n");
        return 1;
    }
    
    double calculating_estimate = estimate(order);
    printf("Estimate of e with order %d: %.10f\n", order, calculating_estimate);
    printf("Actual value of e: 2.7182818285\n");

    return 0;
}

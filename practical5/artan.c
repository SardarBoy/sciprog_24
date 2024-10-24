#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Function prototypes
double arctanhl(double x, double delta);
double arctanh2(double x);

int main(void) {
    double delta;
    printf("Please enter a positive real number delta: \n");
    scanf("%lf", &delta);
    
    if (delta < 0) {
        printf("Delta was negative\n");
        exit(1);
    }

    double x = -0.9;
    int length = 1000;
    double tani[length];
    double tan2[length];
    int i = 0;

    // Calculate values while x is within the range and i is less than length
    while (x <= 0.9 && i < length) {
        tani[i] = arctanhl(x, delta);
        tan2[i] = arctanh2(x);
        printf("The difference at x=%.2lf is %.10lf \n", x, fabs(tani[i] - tan2[i]));
        
        x += 0.1; // Increment x to move through the range
        i++;
    }

    return 0;
}

// Function to calculate arctanh using a series
double arctanhl(double x, double delta) {
    double sum = 0;
    double elem, val;
    int n = 0;
    
    do {
        val = 2 * n + 1;
        elem = pow(x, val) / val;
        sum += elem;
        n++;
    } while (fabs(elem) >= delta);
    
    return sum;
}

// Function to calculate arctanh using the mathematical formula
double arctanh2(double x) {
    return (log(1 + x) - log(1 - x)) / 2;
}

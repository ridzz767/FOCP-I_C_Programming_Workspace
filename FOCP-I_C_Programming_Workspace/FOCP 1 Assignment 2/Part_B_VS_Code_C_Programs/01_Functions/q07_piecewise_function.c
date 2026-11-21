/*
 * Part B - Functions - Question 7: Evaluate a piecewise function f(x)
 * Complete C program for VS Code (C11, no dynamic memory or pointer arithmetic)
 */
#include <stdio.h>

long long evaluatePiecewise(long long x) {
    if (x < 0) {
        return x * x + 2 * x + 1;
    } else if (x < 10) {
        return 3 * x + 2;
    } else {
        return 5 * x - 7;
    }
}

int main(void) {
    long long x;
    if (scanf("%lld", &x) == 1) {
        printf("%lld\n", evaluatePiecewise(x));
    }
    return 0;
}

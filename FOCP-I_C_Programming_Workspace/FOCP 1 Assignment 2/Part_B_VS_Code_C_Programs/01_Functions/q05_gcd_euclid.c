/*
 * Part B - Functions - Question 5: GCD using Euclid's algorithm
 * Complete C program for VS Code (C11, no dynamic memory or pointer arithmetic)
 */
#include <stdio.h>

long long gcd(long long a, long long b) {
    if (a < 0) a = -a;
    if (b < 0) b = -b;

    while (b != 0) {
        long long rem = a % b;
        a = b;
        b = rem;
    }
    return a;
}

int main(void) {
    long long a, b;
    if (scanf("%lld %lld", &a, &b) == 2) {
        printf("%lld\n", gcd(a, b));
    }
    return 0;
}

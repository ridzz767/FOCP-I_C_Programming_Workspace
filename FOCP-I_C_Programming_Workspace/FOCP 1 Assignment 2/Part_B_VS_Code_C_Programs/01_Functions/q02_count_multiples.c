/*
 * Part B - Functions - Question 2: Count multiples in a range [1..n]
 * Complete C program for VS Code (C11, no dynamic memory or pointer arithmetic)
 */
#include <stdio.h>

long long countMultiples(long long n, long long k) {
    if (n <= 0 || k <= 0) {
        return 0;
    }
    return n / k;
}

int main(void) {
    long long n, k;
    if (scanf("%lld %lld", &n, &k) == 2) {
        printf("%lld\n", countMultiples(n, k));
    }
    return 0;
}

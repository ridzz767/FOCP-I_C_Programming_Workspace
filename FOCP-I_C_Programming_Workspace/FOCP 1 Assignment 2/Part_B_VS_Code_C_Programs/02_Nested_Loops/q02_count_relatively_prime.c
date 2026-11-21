/*
 * Part B - Nested Loops - Question 2: Count x in [1, m] with gcd(x, n) == 1
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
    long long n, m;
    if (scanf("%lld %lld", &n, &m) == 2) {
        long long count = 0;
        for (long long x = 1; x <= m; x++) {
            if (gcd(x, n) == 1) {
                count++;
            }
        }
        printf("%lld\n", count);
    }
    return 0;
}

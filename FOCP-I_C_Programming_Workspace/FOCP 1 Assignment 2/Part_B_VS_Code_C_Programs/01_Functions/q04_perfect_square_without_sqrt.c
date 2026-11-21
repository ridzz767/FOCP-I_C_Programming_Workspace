/*
 * Part B - Functions - Question 4: Perfect square without sqrt
 * Complete C program for VS Code (C11, no dynamic memory or pointer arithmetic)
 */
#include <stdio.h>

int isPerfectSquare(long long n) {
    if (n < 0) {
        return 0;
    }
    if (n == 0 || n == 1) {
        return 1;
    }

    long long low = 1;
    /* Cap high at 3037000499 so mid * mid never overflows signed 64-bit long long */
    long long high = (n < 3037000499LL) ? n : 3037000499LL;

    while (low <= high) {
        long long mid = low + (high - low) / 2;
        long long sq = mid * mid;
        if (sq == n) {
            return 1;
        } else if (sq < n) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return 0;
}

int main(void) {
    long long n;
    if (scanf("%lld", &n) == 1) {
        printf("%d\n", isPerfectSquare(n));
    }
    return 0;
}

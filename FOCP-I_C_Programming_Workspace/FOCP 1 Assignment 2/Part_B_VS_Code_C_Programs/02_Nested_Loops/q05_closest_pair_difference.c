/*
 * Part B - Nested Loops - Question 5: Minimum absolute difference between any pair
 * Complete C program for VS Code (C11, no dynamic memory or pointer arithmetic)
 */
#include <stdio.h>

#define MAX_N 10000

int main(void) {
    int n;
    long long arr[MAX_N];

    if (scanf("%d", &n) != 1 || n < 2 || n > MAX_N) {
        return 0;
    }

    for (int i = 0; i < n; i++) {
        if (scanf("%lld", &arr[i]) != 1) {
            return 0;
        }
    }

    long long minDiff = arr[0] - arr[1];
    if (minDiff < 0) {
        minDiff = -minDiff;
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            long long diff = arr[i] - arr[j];
            if (diff < 0) {
                diff = -diff;
            }
            if (diff < minDiff) {
                minDiff = diff;
            }
        }
    }

    printf("%lld\n", minDiff);
    return 0;
}

/*
 * Part B - 1D Arrays - Question 1: Length of longest strictly increasing contiguous subarray
 * Complete C program for VS Code (C11, no dynamic memory or pointer arithmetic)
 */
#include <stdio.h>

#define MAX_N 100000

int main(void) {
    int n;
    long long arr[MAX_N];

    if (scanf("%d", &n) != 1 || n < 0 || n > MAX_N) {
        return 0;
    }

    if (n == 0) {
        printf("0\n");
        return 0;
    }

    for (int i = 0; i < n; i++) {
        if (scanf("%lld", &arr[i]) != 1) {
            return 0;
        }
    }

    int bestLen = 1;
    int currentLen = 1;

    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[i - 1]) {
            currentLen++;
            if (currentLen > bestLen) {
                bestLen = currentLen;
            }
        } else {
            currentLen = 1;
        }
    }

    printf("%d\n", bestLen);
    return 0;
}

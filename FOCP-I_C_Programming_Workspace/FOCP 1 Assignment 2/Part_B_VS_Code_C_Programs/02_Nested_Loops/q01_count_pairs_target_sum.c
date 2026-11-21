/*
 * Part B - Nested Loops - Question 1: Count index pairs i < j summing to target
 * Complete C program for VS Code (C11, no dynamic memory or pointer arithmetic)
 */
#include <stdio.h>

#define MAX_N 10000

int main(void) {
    int n;
    long long target;
    long long arr[MAX_N];

    if (scanf("%d %lld", &n, &target) != 2 || n < 0 || n > MAX_N) {
        return 0;
    }

    for (int i = 0; i < n; i++) {
        if (scanf("%lld", &arr[i]) != 1) {
            return 0;
        }
    }

    long long count = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                count++;
            }
        }
    }

    printf("%lld\n", count);
    return 0;
}

/*
 * Part B - Nested Loops - Question 4: Count index pairs i < j with equal digit sums
 * Complete C program for VS Code (C11, no dynamic memory or pointer arithmetic)
 */
#include <stdio.h>

#define MAX_N 10000

int digitSum(long long x) {
    if (x < 0) x = -x;
    int sum = 0;
    while (x > 0) {
        sum += (int)(x % 10);
        x /= 10;
    }
    return sum;
}

int main(void) {
    int n;
    long long arr[MAX_N];

    if (scanf("%d", &n) != 1 || n < 0 || n > MAX_N) {
        return 0;
    }

    for (int i = 0; i < n; i++) {
        if (scanf("%lld", &arr[i]) != 1) {
            return 0;
        }
    }

    long long count = 0;
    for (int i = 0; i < n - 1; i++) {
        int sumI = digitSum(arr[i]);
        for (int j = i + 1; j < n; j++) {
            if (sumI == digitSum(arr[j])) {
                count++;
            }
        }
    }

    printf("%lld\n", count);
    return 0;
}

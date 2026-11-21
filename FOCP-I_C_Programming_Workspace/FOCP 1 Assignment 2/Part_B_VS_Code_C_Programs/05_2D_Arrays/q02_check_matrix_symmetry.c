/*
 * Part B - 2D Arrays - Question 2: Check whether an n x n square matrix is symmetric
 * Complete C program for VS Code (C11, no dynamic memory or pointer arithmetic)
 */
#include <stdio.h>

#define MAX_N 200

int main(void) {
    int n;
    long long matrix[MAX_N][MAX_N];

    if (scanf("%d", &n) != 1 || n <= 0 || n > MAX_N) {
        return 0;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (scanf("%lld", &matrix[i][j]) != 1) {
                return 0;
            }
        }
    }

    int symmetric = 1;
    for (int i = 0; i < n && symmetric; i++) {
        for (int j = i + 1; j < n; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                symmetric = 0;
                break;
            }
        }
    }

    printf("%s\n", symmetric ? "YES" : "NO");
    return 0;
}

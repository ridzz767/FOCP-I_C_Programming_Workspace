/*
 * Part B - 2D Arrays - Question 1: Print all row sums on line 1 and column sums on line 2
 * Complete C program for VS Code (C11, no dynamic memory or pointer arithmetic)
 */
#include <stdio.h>

#define MAX_DIM 200

int main(void) {
    int r, c;
    long long matrix[MAX_DIM][MAX_DIM];
    long long rowSums[MAX_DIM] = {0};
    long long colSums[MAX_DIM] = {0};

    if (scanf("%d %d", &r, &c) != 2 || r <= 0 || c <= 0 || r > MAX_DIM || c > MAX_DIM) {
        return 0;
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (scanf("%lld", &matrix[i][j]) != 1) {
                return 0;
            }
            rowSums[i] += matrix[i][j];
            colSums[j] += matrix[i][j];
        }
    }

    for (int i = 0; i < r; i++) {
        if (i > 0) printf(" ");
        printf("%lld", rowSums[i]);
    }
    printf("\n");

    for (int j = 0; j < c; j++) {
        if (j > 0) printf(" ");
        printf("%lld", colSums[j]);
    }
    printf("\n");

    return 0;
}

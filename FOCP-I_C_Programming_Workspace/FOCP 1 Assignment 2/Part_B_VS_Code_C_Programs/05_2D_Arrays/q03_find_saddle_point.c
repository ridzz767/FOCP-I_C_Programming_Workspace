/*
 * Part B - 2D Arrays - Question 3: Find first row-major saddle point (row min & col max)
 * Complete C program for VS Code (C11, no dynamic memory or pointer arithmetic)
 */
#include <stdio.h>

#define MAX_DIM 200

int main(void) {
    int r, c;
    long long matrix[MAX_DIM][MAX_DIM];
    long long rowMin[MAX_DIM];
    long long colMax[MAX_DIM];

    if (scanf("%d %d", &r, &c) != 2 || r <= 0 || c <= 0 || r > MAX_DIM || c > MAX_DIM) {
        return 0;
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (scanf("%lld", &matrix[i][j]) != 1) {
                return 0;
            }
        }
    }

    for (int i = 0; i < r; i++) {
        rowMin[i] = matrix[i][0];
        for (int j = 1; j < c; j++) {
            if (matrix[i][j] < rowMin[i]) {
                rowMin[i] = matrix[i][j];
            }
        }
    }

    for (int j = 0; j < c; j++) {
        colMax[j] = matrix[0][j];
        for (int i = 1; i < r; i++) {
            if (matrix[i][j] > colMax[j]) {
                colMax[j] = matrix[i][j];
            }
        }
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (matrix[i][j] == rowMin[i] && matrix[i][j] == colMax[j]) {
                printf("%d %d %lld\n", i, j, matrix[i][j]);
                return 0;
            }
        }
    }

    printf("None\n");
    return 0;
}

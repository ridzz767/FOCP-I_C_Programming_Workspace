/*
 * Part B - 2D Arrays - Question 4: Count cells strictly greater than existing 4-neighbours
 * Complete C program for VS Code (C11, no dynamic memory or pointer arithmetic)
 */
#include <stdio.h>

#define MAX_DIM 200

int main(void) {
    int r, c;
    long long matrix[MAX_DIM][MAX_DIM];

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

    int peaks = 0;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            long long val = matrix[i][j];
            int isPeak = 1;

            if (i > 0 && !(val > matrix[i - 1][j])) isPeak = 0;
            if (i + 1 < r && !(val > matrix[i + 1][j])) isPeak = 0;
            if (j > 0 && !(val > matrix[i][j - 1])) isPeak = 0;
            if (j + 1 < c && !(val > matrix[i][j + 1])) isPeak = 0;

            if (isPeak) {
                peaks++;
            }
        }
    }

    printf("%d\n", peaks);
    return 0;
}

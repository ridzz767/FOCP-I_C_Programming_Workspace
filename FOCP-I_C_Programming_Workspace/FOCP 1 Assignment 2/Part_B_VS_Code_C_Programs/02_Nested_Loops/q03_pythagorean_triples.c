/*
 * Part B - Nested Loops - Question 3: List Pythagorean triples 1 <= a < b < c <= N
 * Complete C program for VS Code (C11, no dynamic memory or pointer arithmetic)
 */
#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) {
        return 0;
    }

    int found = 0;
    for (int a = 1; a <= n - 2; a++) {
        for (int b = a + 1; b <= n - 1; b++) {
            long long sumSq = (long long)a * a + (long long)b * b;
            for (int c = b + 1; c <= n; c++) {
                long long cSq = (long long)c * c;
                if (cSq == sumSq) {
                    printf("%d %d %d\n", a, b, c);
                    found = 1;
                } else if (cSq > sumSq) {
                    break;
                }
            }
        }
    }

    if (!found) {
        printf("None\n");
    }
    return 0;
}

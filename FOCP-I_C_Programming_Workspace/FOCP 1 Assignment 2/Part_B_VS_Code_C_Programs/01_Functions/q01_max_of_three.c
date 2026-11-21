/*
 * Part B - Functions - Question 1: Find maximum of three integers
 * Complete C program for VS Code (C11, no dynamic memory or pointer arithmetic)
 */
#include <stdio.h>

int maxOfThree(int a, int b, int c) {
    int maxVal = a;
    if (b > maxVal) {
        maxVal = b;
    }
    if (c > maxVal) {
        maxVal = c;
    }
    return maxVal;
}

int main(void) {
    int a, b, c;
    if (scanf("%d %d %d", &a, &b, &c) == 3) {
        printf("%d\n", maxOfThree(a, b, c));
    }
    return 0;
}

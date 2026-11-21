/*
 * Part B - Functions - Question 3: Rectangle area function
 * Complete C program for VS Code (C11, no dynamic memory or pointer arithmetic)
 */
#include <stdio.h>

long long rectangleArea(long long length, long long width) {
    return length * width;
}

int main(void) {
    long long length, width;
    if (scanf("%lld %lld", &length, &width) == 2) {
        long long area = rectangleArea(length, width);
        printf("%lld\n", area);
    }
    return 0;
}

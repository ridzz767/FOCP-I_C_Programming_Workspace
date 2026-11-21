/*
 * Part B - Functions - Question 6: Convert total seconds into hours, minutes, seconds
 * Complete C program for VS Code (C11, no dynamic memory or pointer arithmetic)
 */
#include <stdio.h>

void printConvertedSeconds(long long totalSeconds) {
    long long hours = totalSeconds / 3600;
    long long remaining = totalSeconds % 3600;
    long long minutes = remaining / 60;
    long long seconds = remaining % 60;
    printf("%lld %lld %lld\n", hours, minutes, seconds);
}

int main(void) {
    long long totalSeconds;
    if (scanf("%lld", &totalSeconds) == 1) {
        printConvertedSeconds(totalSeconds);
    }
    return 0;
}

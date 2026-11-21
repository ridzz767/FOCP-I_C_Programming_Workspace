/*
 * Part B - Strings - Question 2: Run-length encode consecutive repeated letters
 * Complete C program for VS Code (C11, no dynamic memory or pointer arithmetic)
 */
#include <stdio.h>
#include <string.h>

#define MAX_STR 10005

int main(void) {
    char str[MAX_STR];

    if (scanf("%10004s", str) != 1) {
        return 0;
    }

    int len = (int)strlen(str);
    if (len == 0) {
        printf("\n");
        return 0;
    }

    char currentChar = str[0];
    int runCount = 1;

    for (int i = 1; i < len; i++) {
        if (str[i] == currentChar) {
            runCount++;
        } else {
            printf("%c%d", currentChar, runCount);
            currentChar = str[i];
            runCount = 1;
        }
    }
    printf("%c%d\n", currentChar, runCount);

    return 0;
}

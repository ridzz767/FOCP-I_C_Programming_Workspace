/*
 * Part B - Strings - Question 1: Count English vowels, consonants, digits, and spaces
 * Complete C program for VS Code (C11, no dynamic memory or pointer arithmetic)
 */
#include <stdio.h>
#include <ctype.h>

#define MAX_LINE 10005

int isVowel(char ch) {
    char lower = (char)tolower((unsigned char)ch);
    return (lower == 'a' || lower == 'e' || lower == 'i' ||
            lower == 'o' || lower == 'u');
}

int main(void) {
    char line[MAX_LINE];

    if (fgets(line, sizeof(line), stdin) == NULL) {
        return 0;
    }

    int vowels = 0;
    int consonants = 0;
    int digits = 0;
    int spaces = 0;

    for (int i = 0; line[i] != '\0'; i++) {
        unsigned char ch = (unsigned char)line[i];
        if (ch == '\n' || ch == '\r') {
            continue;
        }
        if (isalpha(ch)) {
            if (isVowel((char)ch)) {
                vowels++;
            } else {
                consonants++;
            }
        } else if (isdigit(ch)) {
            digits++;
        } else if (ch == ' ') {
            spaces++;
        }
    }

    printf("%d %d %d %d\n", vowels, consonants, digits, spaces);
    return 0;
}

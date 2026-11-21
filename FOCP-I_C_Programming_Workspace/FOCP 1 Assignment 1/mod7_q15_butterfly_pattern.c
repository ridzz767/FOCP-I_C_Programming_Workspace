#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        int mid = (n + 1) / 2;
        // Upper half including middle
        for (int i = 1; i <= mid; i++) {
            for (int j = 1; j <= i; j++) printf("*");
            for (int j = 1; j <= 2 * (mid - i); j++) printf(" ");
            for (int j = 1; j <= i; j++) {
                if (i == mid && j == mid) continue; // avoid extra center star for odd width
                printf("*");
            }
            printf("\n");
        }
        // Lower half
        for (int i = mid - 1; i >= 1; i--) {
            for (int j = 1; j <= i; j++) printf("*");
            for (int j = 1; j <= 2 * (mid - i); j++) printf(" ");
            for (int j = 1; j <= i; j++) printf("*");
            printf("\n");
        }
    }
    return 0;
}
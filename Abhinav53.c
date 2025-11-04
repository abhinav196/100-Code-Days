#include <stdio.h>

int main() {
    int i, j, space;
    int n = 5; // height of the upper half

    // Upper half (increasing part)
    for (i = 1; i <= n; i++) {
        // Print spaces before stars
        for (space = i; space < n; space++) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half (decreasing part)
    for (i = n - 1; i >= 1; i--) {
        // Print spaces before stars
        for (space = n; space > i; space--) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

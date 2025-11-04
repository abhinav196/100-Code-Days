#include <stdio.h>

int main() {
    int i, j, space;
    int n = 4; // height of the top half

    // Upper half of the diamond
    for (i = 1; i <= n; i++) {
        // Print spaces
        for (space = i; space < n; space++) {
            printf(" ");
        }

        // Print stars
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }

        printf("\n");
    }

    // Lower half of the diamond
    for (i = n - 1; i >= 1; i--) {
        // Print spaces
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

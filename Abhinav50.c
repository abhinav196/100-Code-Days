#include <stdio.h>

int main() {
    int i, j, space;

    // Outer loop for rows
    for (i = 5; i >= 1; i--) {
        // Print leading spaces
        for (space = 5; space > i; space--) {
            printf(" ");
        }

        // Print stars
        for (j = 1; j <= i; j++) {
            printf("*");
        }

        printf("\n"); // Move to next line after each row
    }

    return 0;
}

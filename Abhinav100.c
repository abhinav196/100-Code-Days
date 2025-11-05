#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    int n = strlen(str);

    printf("All substrings of the string are:\n");

    // Generate all substrings
    for (int i = 0; i < n; i++) {        // starting index
        for (int j = i; j < n; j++) {    // ending index
            for (int k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }

    return 0;
}

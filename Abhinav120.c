#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[1000];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    int n = strlen(str);

    if (n > 0 && isalpha(str[0])) {
        str[0] = toupper(str[0]);  // Capitalize first character
    }

    // Convert the rest to lowercase
    for (int i = 1; i < n; i++) {
        str[i] = tolower(str[i]);
    }

    printf("Sentence case: %s\n", str);

    return 0;
}

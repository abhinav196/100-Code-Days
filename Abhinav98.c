#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[100];

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    // Remove newline character if present
    name[strcspn(name, "\n")] = '\0';

    int len = strlen(name);
    int lastSpace = -1;

    // Find the last space (before surname)
    for (int i = 0; i < len; i++) {
        if (name[i] == ' ')
            lastSpace = i;
    }

    printf("Formatted name: ");

    // Print initials for all names before surname
    for (int i = 0; i <= lastSpace; i++) {
        if (i == 0 || (name[i - 1] == ' ' && name[i] != ' ')) {
            printf("%c. ", toupper(name[i]));
        }
    }

    // Print surname in full
    if (lastSpace != -1) {
        for (int i = lastSpace + 1; i < len; i++) {
            printf("%c", name[i]);
        }
    }

    printf("\n");

    return 0;
}

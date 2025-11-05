#include <stdio.h>
#include <string.h>

int main() {
    char name[100];

    printf("Enter a full name: ");
    fgets(name, sizeof(name), stdin);

    // Remove newline character if present
    name[strcspn(name, "\n")] = '\0';

    printf("Initials: ");

    // Print the first character of the first word
    if (name[0] != ' ')
        printf("%c", name[0]);

    // Loop through the string and print character after each space
    for (int i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\0') {
            printf("%c", name[i + 1]);
        }
    }

    printf("\n");
    return 0;
}

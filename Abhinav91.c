#include <stdio.h>

int main() {
    char str[100];
    int j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // read string with spaces

    // Remove vowels
    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        char ch = str[i];

        // Convert uppercase to lowercase for checking
        char lower = (ch >= 'A' && ch <= 'Z') ? ch + ('a' - 'A') : ch;

        if (lower != 'a' && lower != 'e' && lower != 'i' && lower != 'o' && lower != 'u') {
            str[j++] = str[i];  // keep consonants and non-alphabetic characters
        }
    }
    str[j] = '\0';  // terminate the modified string

    printf("String after removing vowels: %s\n", str);

    return 0;
}

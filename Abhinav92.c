#include <stdio.h>

int main() {
    char str[100];
    int freq[26] = {0};  // Frequency array for 'a' to 'z'

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Read string including spaces

    int found = 0;

    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        char ch = str[i];

        // Consider only lowercase letters
        if (ch >= 'a' && ch <= 'z') {
            freq[ch - 'a']++;

            if (freq[ch - 'a'] == 2) {  // First repeating occurrence
                printf("The first repeating lowercase alphabet is '%c'\n", ch);
                found = 1;
                break;
            }
        }
    }

    if (!found) {
        printf("No repeating lowercase alphabet found.\n");
    }

    return 0;
}

#include <stdio.h>
#include <string.h>

// Function to check if str2 is a substring of str1
int isSubstring(char str1[], char str2[]) {
    int n1 = strlen(str1);
    int n2 = strlen(str2);

    for (int i = 0; i <= n1 - n2; i++) {
        int j;
        for (j = 0; j < n2; j++) {
            if (str1[i + j] != str2[j]) {
                break;
            }
        }
        if (j == n2)
            return 1;  // str2 is a substring
    }
    return 0;  // str2 is not a substring
}

int main() {
    char str1[100], str2[100];
    char temp[200];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline characters if present
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    // Check lengths first
    if (strlen(str1) != strlen(str2)) {
        printf("The strings are not rotations of each other.\n");
        return 0;
    }

    // Concatenate str1 with itself
    strcpy(temp, str1);
    strcat(temp, str1);

    // Check if str2 is a substring of temp
    if (isSubstring(temp, str2))
        printf("The strings are rotations of each other.\n");
    else
        printf("The strings are not rotations of each other.\n");

    return 0;
}

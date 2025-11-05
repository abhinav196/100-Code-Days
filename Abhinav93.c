#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int freq1[26] = {0}, freq2[26] = {0};

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Count frequency of lowercase letters in first string
    for (int i = 0; str1[i] != '\0' && str1[i] != '\n'; i++) {
        char ch = str1[i];
        if (ch >= 'a' && ch <= 'z') freq1[ch - 'a']++;
        else if (ch >= 'A' && ch <= 'Z') freq1[ch - 'A']++;  // handle uppercase
    }

    // Count frequency of lowercase letters in second string
    for (int i = 0; str2[i] != '\0' && str2[i] != '\n'; i++) {
        char ch = str2[i];
        if (ch >= 'a' && ch <= 'z') freq2[ch - 'a']++;
        else if (ch >= 'A' && ch <= 'Z') freq2[ch - 'A']++;  // handle uppercase
    }

    // Compare frequencies
    int isAnagram = 1;
    for (int i = 0; i < 26; i++) {
        if (freq1[i] != freq2[i]) {
            isAnagram = 0;
            break;
        }
    }

    if (isAnagram)
        printf("The strings are anagrams.\n");
    else
        printf("The strings are not anagrams.\n");

    return 0;
}

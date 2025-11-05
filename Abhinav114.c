#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    // Remove newline character if present
    s[strcspn(s, "\n")] = '\0';

    int n = strlen(s);
    int maxLen = 0;
    int lastIndex[256];  // store last index of characters
    for (int i = 0; i < 256; i++)
        lastIndex[i] = -1;

    int start = 0; // start index of current substring

    for (int i = 0; i < n; i++) {
        char ch = s[i];
        if (lastIndex[(int)ch] >= start) {
            start = lastIndex[(int)ch] + 1; // move start after repeating character
        }
        lastIndex[(int)ch] = i;
        int len = i - start + 1;
        if (len > maxLen)
            maxLen = len;
    }

    printf("Length of the longest substring without repeating characters: %d\n", maxLen);

    return 0;
}

#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    char longest[100] = "";
    
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    int maxLength = 0;
    int length = 0;
    int start = 0;  // start index of a word

    for (int i = 0; ; i++) {
        if (str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
            length++;
        } else {
            if (length > maxLength) {
                maxLength = length;
                strncpy(longest, str + start, length);
                longest[length] = '\0';  // terminate the word
            }
            length = 0;
            start = i + 1;
        }
        if (str[i] == '\0' || str[i] == '\n') break;
    }

    printf("The longest word is: %s\n", longest);

    return 0;
}

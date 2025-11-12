#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char filename[50];
    char ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;

    // Ask for filename
    printf("Enter the filename: ");
    scanf("%s", filename);

    // Open file in read mode
    fp = fopen(filename, "r");

    // Check if file opened successfully
    if (fp == NULL) {
        printf("Error opening file! Make sure the file exists.\n");
        return 1;
    }

    // Read file character by character
    while ((ch = fgetc(fp)) != EOF) {
        characters++; // Count every character

        // Count lines
        if (ch == '\n')
            lines++;

        // Check for words
        if (isspace(ch)) {
            inWord = 0; // End of a word
        } else if (!inWord) {
            inWord = 1;
            words++; // New word starts
        }
    }

    fclose(fp);

    printf("\nFile: %s\n", filename);
    printf("Total Characters: %d\n", characters);
    printf("Total Words: %d\n", words);
    printf("Total Lines: %d\n", lines);

    return 0;
}

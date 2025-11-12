#include <stdio.h>
#include <ctype.h>  // for isalpha(), tolower()

int main() {
    FILE *fp;
    char filename[50];
    char ch;
    int vowels = 0, consonants = 0;

    // Ask the user for the filename
    printf("Enter the filename: ");
    scanf("%s", filename);

    // Open the file in read mode
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: Cannot open file %s\n", filename);
        return 1;
    }

    // Read the file character by character
    while ((ch = fgetc(fp)) != EOF) {
        ch = tolower(ch); // Convert to lowercase for easy comparison

        if (isalpha(ch)) { // Check if character is a letter
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    // Close the file
    fclose(fp);

    // Display results
    printf("\nFile: %s\n", filename);
    printf("Total vowels: %d\n", vowels);
    printf("Total consonants: %d\n", consonants);

    return 0;
}

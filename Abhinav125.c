#include <stdio.h>

int main() {
    FILE *fp;
    char filename[50];
    char newline[100];

    // Get the filename from the user
    printf("Enter the filename: ");
    scanf("%s", filename);
    getchar(); // Clear the newline character left by scanf

    // Open the file in append mode
    fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error opening file! Make sure it exists.\n");
        return 1;
    }

    // Get new text from the user
    printf("Enter a new line of text to append: ");
    fgets(newline, sizeof(newline), stdin);

    // Append the text to the file
    fprintf(fp, "%s", newline);

    // Close the file
    fclose(fp);

    printf("Text successfully appended to %s\n", filename);

    return 0;
}

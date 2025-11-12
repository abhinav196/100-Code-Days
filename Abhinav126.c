#include <stdio.h>

int main() {
    FILE *fp;
    char filename[50];
    char line[200];

    // Ask the user for a filename
    printf("Enter the filename: ");
    scanf("%s", filename);

    // Try to open the file in read mode
    fp = fopen(filename, "r");

    // Check if file exists (or opened successfully)
    if (fp == NULL) {
        printf("Error: File '%s' does not exist or cannot be opened.\n", filename);
        return 1;
    }

    // If file exists, display its content
    printf("\nContents of %s:\n\n", filename);
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }

    // Close the file
    fclose(fp);

    return 0;
}

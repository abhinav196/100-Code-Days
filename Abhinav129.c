#include <stdio.h>

int main() {
    FILE *fp;
    char filename[50] = "numbers.txt";
    int num, count = 0;
    int sum = 0;
    double average;

    // Open the file in read mode
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: Cannot open file %s\n", filename);
        return 1;
    }

    // Read integers until EOF
    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    // Close the file
    fclose(fp);

    // Check if any numbers were read
    if (count == 0) {
        printf("No integers found in %s\n", filename);
        return 0;
    }

    // Compute average
    average = (double)sum / count;

    // Display results
    printf("Total numbers read: %d\n", count);
    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}

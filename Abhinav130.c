#include <stdio.h>

int main() {
    FILE *fp;
    int n, roll;
    char name[50];
    float marks;

    // Open file in write mode
    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }

    // Get number of students
    printf("Enter number of students: ");
    scanf("%d", &n);

    // Write student records to file
    for (int i = 0; i < n; i++) {
        printf("\nEnter details of student %d\n", i + 1);
        printf("Name: ");
        scanf("%s", name);
        printf("Roll Number: ");
        scanf("%d", &roll);
        printf("Marks: ");
        scanf("%f", &marks);

        fprintf(fp, "%s %d %.2f\n", name, roll, marks);
    }

    fclose(fp);
    printf("\nStudent records saved successfully to students.txt\n");

    // Reopen file in read mode
    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    printf("\nReading data from students.txt:\n");
    printf("-----------------------------------\n");
    printf("Name\tRoll\tMarks\n");
    printf("-----------------------------------\n");

    // Read and display each record
    while (fscanf(fp, "%s %d %f", name, &roll, &marks) == 3) {
        printf("%s\t%d\t%.2f\n", name, roll, marks);
    }

    fclose(fp);
    return 0;
}

#include <stdio.h>

int main() {
    float percentage;
    char grade;

    printf("Enter percentage (0-100): ");
    scanf("%f", &percentage);

    if (percentage < 0 || percentage > 100) {
        printf("Invalid percentage entered.\n");
        return 0;
    }

    if (percentage >= 90) {
        grade = 'A';
    } 
    else if (percentage >= 80) {
        grade = 'B';
    } 
    else if (percentage >= 70) {
        grade = 'C';
    } 
    else if (percentage >= 60) {
        grade = 'D';
    } 
    else {
        grade = 'F';
    }

    printf("Grade = %c\n", grade);

    return 0;
}
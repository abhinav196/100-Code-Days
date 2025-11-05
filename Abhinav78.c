#include <stdio.h>

int main() {
    int n, i, j;
    int sum = 0;

    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    int matrix[100][100];

    // Read matrix elements
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate sum of main diagonal elements
    for (i = 0; i < n; i++) {
        sum += matrix[i][i];
    }

    printf("Sum of main diagonal elements = %d\n", sum);

    return 0;
}

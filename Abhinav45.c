#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    int numerator = 2;
    int denominator = 3;

    for (int i = 1; i <= n; i++) {
        sum += (double)numerator / denominator;

        numerator += 2;     // Increment numerator by 2
        denominator += 4;   // Increment denominator by 4
    }

    printf("Sum of the series up to %d terms is: %.2lf\n", n, sum);

    return 0;
}

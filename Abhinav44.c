#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    int numerator = 1;
    int denominator = 1;

    for (int i = 1; i <= n; i++) {
        sum += (double)numerator / denominator;

        // Increment numerator and denominator for next term
        numerator += 2;
        denominator += 2;
    }

    printf("Sum of the series up to %d terms is: %.2lf\n", n, sum);

    return 0;
}
#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    for(int i = 1; i <= 2*n; i += 2) {
        sum += i;
    }

    printf("Sum of first %d odd numbers = %d\n", n, sum);

    return 0;
}
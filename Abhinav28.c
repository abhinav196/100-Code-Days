#include <stdio.h>

int main() {
    int n;
    unsigned long long product = 1; // Use long long to handle large products

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    if(n < 2) {
        printf("No even numbers in the range.\n");
        return 0;
    }

    for(int i = 2; i <= n; i += 2) {
        product *= i;
    }

    printf("Product of even numbers from 1 to %d = %llu\n", n, product);

    return 0;
}

#include <stdio.h>

int main() {
    int num1, num2, temp;

    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 <= 0 || num2 <= 0) {
        printf("Please enter positive integers only.\n");
        return 0;
    }

    // Euclidean algorithm
    while (num2 != 0) {
        temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }

    printf("HCF (GCD) = %d\n", num1);

    return 0;
}

#include <stdio.h>
#include <math.h>

int main() {
    int num, original, remainder, digits = 0;
    double result = 0.0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    original = num;

    // Count number of digits
    while (original != 0) {
        original /= 10;
        digits++;
    }

    original = num;

    // Compute sum of digits raised to the power of number of digits
    while (original != 0) {
        remainder = original % 10;
        result += pow(remainder, digits);
        original /= 10;
    }

    if ((int)result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}
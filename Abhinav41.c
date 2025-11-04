#include <stdio.h>
#include <math.h>

int main() {
    int num, firstDigit, lastDigit, digits, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Handle single-digit numbers
    if (num >= 0 && num <= 9) {
        printf("Number after swapping first and last digit: %d\n", num);
        return 0;
    }

    lastDigit = num % 10;

    // Find number of digits and the first digit
    digits = (int)log10(num);
    firstDigit = num / pow(10, digits);

    // Remove first and last digit
    result = num % (int)pow(10, digits);   // remove first digit
    result = result - lastDigit;           // remove last digit

    // Swap first and last digits
    result = lastDigit * pow(10, digits) + result + firstDigit;

    printf("Number after swapping first and last digit: %d\n", result);

    return 0;
}
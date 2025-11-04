#include <stdio.h>

int main() {
    int num, temp, digit, product = 1;
    int hasOdd = 0; // Flag to check if there is at least one odd digit

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num; // Store original number for display

    // Loop through each digit
    while (num != 0) {
        digit = num % 10;   // Get last digit
        if (digit % 2 != 0) { // Check if the digit is odd
            product *= digit;
            hasOdd = 1;
        }
        num /= 10;           // Remove last digit
    }

    if (hasOdd)
        printf("Product of odd digits of %d is %d\n", temp, product);
    else
        printf("There are no odd digits in %d\n", temp);

    return 0;
}
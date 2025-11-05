#include <stdio.h>

int main() {
    long num;
    int digit, count[10] = {0}, maxCount = 0, mostFrequentDigit;

    printf("Enter an integer number: ");
    scanf("%ld", &num);

    // Handle negative numbers
    if (num < 0)
        num = -num;

    // Count frequency of each digit
    while (num > 0) {
        digit = num % 10;
        count[digit]++;
        num /= 10;
    }

    // Find the digit with maximum frequency
    for (int i = 0; i < 10; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            mostFrequentDigit = i;
        }
    }

    printf("The digit that occurs the most times is: %d\n", mostFrequentDigit);
    printf("It occurs %d times.\n", maxCount);

    return 0;
}

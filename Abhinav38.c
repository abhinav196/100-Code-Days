#include <stdio.h>

int main() {
    int num, sum = 0, temp;
    
    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);
    
    temp = num; // Store original number for display
    
    // Calculate sum of digits
    while (num != 0) {
        sum += num % 10; // Add last digit to sum
        num /= 10;       // Remove last digit
    }
    
    printf("Sum of digits of %d is %d\n", temp, sum);
    
    return 0;
}
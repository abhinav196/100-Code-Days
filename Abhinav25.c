#include <stdio.h>

int main() {
    char operator;
    float num1, num2, result;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter an operator (+, -, *, /, %): ");
    scanf(" %c", &operator);  // space before %c to consume any leftover newline

    printf("Enter second number: ");
    scanf("%f", &num2);

    switch(operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2f\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2f\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2f\n", result);
            break;
        case '/':
            if(num2 != 0)
                printf("Result: %.2f\n", num1 / num2);
            else
                printf("Error: Division by zero!\n");
            break;
        case '%':
            if((int)num2 != 0)
                printf("Result: %d\n", (int)num1 % (int)num2);
            else
                printf("Error: Division by zero!\n");
            break;
        default:
            printf("Invalid operator!\n");
    }

    return 0;
}
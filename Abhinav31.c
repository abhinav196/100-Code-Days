#include <stdio.h>

int main() {
    int num, binary[32], i = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("Binary: 0\n");
        return 0;
    }

    printf("Binary representation of %d is: ", num);

    while (num > 0) {
        binary[i] = num % 2; // store remainder
        num = num / 2;       // divide by 2
        i++;
    }

    // print binary digits in reverse
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }

    printf("\n");
    return 0;
}
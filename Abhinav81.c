#include <stdio.h>

int main() {
    char str[100];
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // read string with spaces

    // Count characters until null character
    while (str[count] != '\0' && str[count] != '\n') {
        count++;
    }

    printf("Number of characters in the string: %d\n", count);

    return 0;
}

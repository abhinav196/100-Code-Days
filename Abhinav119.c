#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int repeated = 0;

    for (int i = 0; i < n; i++) {
        repeated ^= arr[i]; // XOR all elements
    }

    // XOR with numbers from 1 to n-1 (assuming numbers from 1 to n-1 with one repetition)
    for (int i = 1; i <= n - 1; i++) {
        repeated ^= i;
    }

    printf("The repeated element is: %d\n", repeated);

    return 0;
}

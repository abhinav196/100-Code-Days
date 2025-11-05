#include <stdio.h>

int main() {
    int n;

    printf("Enter the size of the array (n): ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the array elements (numbers from 0 to %d with one missing): ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sum of numbers from 0 to n
    int totalSum = n * (n + 1) / 2;

    // Sum of elements in the array
    int arraySum = 0;
    for (int i = 0; i < n; i++) {
        arraySum += arr[i];
    }

    int missingNumber = totalSum - arraySum;
    printf("The missing number is: %d\n", missingNumber);

    return 0;
}

#include <stdio.h>

int main() {
    int n, k, i;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[100]; // assuming max size 100

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number of positions to rotate (k): ");
    scanf("%d", &k);

    // To handle cases where k > n
    k = k % n;

    // Temporary array to store rotated elements
    int temp[100];

    // Copy last k elements to the beginning of temp
    for (i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }

    // Copy the remaining elements
    for (i = 0; i < n - k; i++) {
        temp[k + i] = arr[i];
    }

    // Copy back to original array
    for (i = 0; i < n; i++) {
        arr[i] = temp[i];
    }

    // Print rotated array
    printf("Array after rotating right by %d positions:\n", k);
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

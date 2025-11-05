#include <stdio.h>

int main() {
    int n, i, pos, num;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[100];  // assuming maximum size 100

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &num);

    printf("Enter the position to insert (1 to %d): ", n + 1);
    scanf("%d", &pos);

    // Validate position
    if (pos < 1 || pos > n + 1) {
        printf("Invalid position!\n");
        return 0;
    }

    // Shift elements to the right
    for (i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new element
    arr[pos - 1] = num;
    n++;

    // Print updated array
    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}

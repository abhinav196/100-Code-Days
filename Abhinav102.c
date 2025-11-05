#include <stdio.h>

int findCeil(int arr[], int n, int x) {
    int left = 0, right = n - 1;
    int result = -1;  // index of ceil

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] >= x) {
            result = mid;      // possible ceil
            right = mid - 1;   // look for smaller index
        } else {
            left = mid + 1;
        }
    }

    return result;
}

int main() {
    int n, x;

    printf("Enter number of elements in the sorted array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the sorted array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value of x: ");
    scanf("%d", &x);

    int index = findCeil(arr, n, x);

    printf("Index of ceil of %d: %d\n", x, index);

    return 0;
}

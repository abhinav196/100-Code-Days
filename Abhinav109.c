#include <stdio.h>

int main() {
    int n, k;

    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the subarray size k: ");
    scanf("%d", &k);

    if (k > n) {
        printf("Subarray size k cannot be greater than array size.\n");
        return 0;
    }

    // Compute sum of first subarray of size k
    int sum = 0;
    for (int i = 0; i < k; i++) {
        sum += arr[i];
    }

    int maxSum = sum;

    // Slide the window
    for (int i = k; i < n; i++) {
        sum = sum + arr[i] - arr[i - k];
        if (sum > maxSum)
            maxSum = sum;
    }

    printf("Maximum sum of subarrays of size %d: %d\n", k, maxSum);

    return 0;
}

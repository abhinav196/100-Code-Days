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

    printf("Maximum elements in each subarray of size %d: ", k);

    // Loop through each subarray of size k
    for (int i = 0; i <= n - k; i++) {
        int max = arr[i];
        for (int j = i + 1; j < i + k; j++) {
            if (arr[j] > max)
                max = arr[j];
        }
        printf("%d", max);
        if (i != n - k)
            printf(" ");  // space-separated output
    }

    printf("\n");
    return 0;
}

#include <stdio.h>

int main() {
    int m, n;

    printf("Enter the size of the first sorted array: ");
    scanf("%d", &m);
    int arr1[m];
    printf("Enter the elements of the first array: ");
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of the second sorted array: ");
    scanf("%d", &n);
    int arr2[n];
    printf("Enter the elements of the second array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    int merged[m + n];
    int i = 0, j = 0, k = 0;

    // Merge arrays using two-pointer technique
    while (i < m && j < n) {
        if (arr1[i] <= arr2[j])
            merged[k++] = arr1[i++];
        else
            merged[k++] = arr2[j++];
    }

    // Copy remaining elements if any
    while (i < m)
        merged[k++] = arr1[i++];
    while (j < n)
        merged[k++] = arr2[j++];

    // Print merged array
    printf("Merged sorted array: ");
    for (int p = 0; p < m + n; p++) {
        printf("%d", merged[p]);
        if (p != m + n - 1)
            printf(" ");
    }
    printf("\n");

    return 0;
}

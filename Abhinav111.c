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

    printf("First negative integers in each subarray of size %d: ", k);

    // Loop through each subarray of size k
    for (int i = 0; i <= n - k; i++) {
        int found = 0;
        for (int j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                printf("%d", arr[j]);
                found = 1;
                break;  // first negative found
            }
        }
        if (!found) {
            printf("0");  // no negative in this window
        }
        if (i != n - k)
            printf(" ");  // space-separated output
    }

    printf("\n");
    return 0;
}

#include <stdio.h>

int main() {
    int n;
    
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    int totalSum = 0;

    printf("Enter the array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        totalSum += arr[i];  // calculate total sum
    }

    int leftSum = 0;
    int pivotIndex = -1;

    for (int i = 0; i < n; i++) {
        int rightSum = totalSum - leftSum - arr[i];  // sum to the right
        if (leftSum == rightSum) {
            pivotIndex = i;  // leftmost pivot index
            break;
        }
        leftSum += arr[i];
    }

    printf("Pivot index: %d\n", pivotIndex);

    return 0;
}

#include <stdio.h>

int main() {
    int n, target;
    
    printf("Enter number of elements in the sorted array: ");
    scanf("%d", &n);
    
    int nums[n];
    printf("Enter the sorted array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    printf("Enter the target element: ");
    scanf("%d", &target);

    int first = -1, last = -1;

    // Find first occurrence
    for (int i = 0; i < n; i++) {
        if (nums[i] == target) {
            first = i;
            break;
        }
    }

    // Find last occurrence
    for (int i = n - 1; i >= 0; i--) {
        if (nums[i] == target) {
            last = i;
            break;
        }
    }

    printf("First and last occurrence indices: %d, %d\n", first, last);

    return 0;
}

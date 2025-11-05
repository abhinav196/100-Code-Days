#include <stdio.h>

int findMajorityElement(int nums[], int n) {
    int candidate = nums[0];
    int count = 1;

    // Phase 1: Find a candidate
    for (int i = 1; i < n; i++) {
        if (nums[i] == candidate)
            count++;
        else
            count--;

        if (count == 0) {
            candidate = nums[i];
            count = 1;
        }
    }

    // Phase 2: Verify the candidate
    count = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] == candidate)
            count++;
    }

    if (count > n / 2)
        return candidate;
    else
        return -1;
}

int main() {
    int n;
    printf("Enter size of the array: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter the array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int majority = findMajorityElement(nums, n);
    printf("Majority element: %d\n", majority);

    return 0;
}

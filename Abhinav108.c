#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter the array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int leftProd[n];   // product of elements to the left
    int rightProd[n];  // product of elements to the right
    int answer[n];

    // Compute left products
    leftProd[0] = 1;  // no elements to the left of first element
    for (int i = 1; i < n; i++) {
        leftProd[i] = leftProd[i - 1] * nums[i - 1];
    }

    // Compute right products
    rightProd[n - 1] = 1;  // no elements to the right of last element
    for (int i = n - 2; i >= 0; i--) {
        rightProd[i] = rightProd[i + 1] * nums[i + 1];
    }

    // Compute answer array
    for (int i = 0; i < n; i++) {
        answer[i] = leftProd[i] * rightProd[i];
    }

    // Print the answer array
    printf("Product array: ");
    for (int i = 0; i < n; i++) {
        printf("%d", answer[i]);
        if (i != n - 1)
            printf(",");  // comma-separated output
    }
    printf("\n");

    return 0;
}

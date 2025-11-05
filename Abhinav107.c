#include <stdio.h>

int main() {
    int n;

    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Next greater elements: ");

    for (int i = 0; i < n; i++) {
        int nextGreater = -1;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                nextGreater = arr[j];
                break;  // nearest greater element found
            }
        }
        printf("%d", nextGreater);
        if (i != n - 1)
            printf(",");  // comma-separated output
    }

    printf("\n");
    return 0;
}

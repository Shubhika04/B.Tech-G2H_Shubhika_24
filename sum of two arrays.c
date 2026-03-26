#include <stdio.h>

int main() {
    int n, i, arr1[100], arr2[100], sum[100];


    printf("Enter number of elements: ");
    scanf("%d", &n);

    
    // Input first array
    printf("Enter elements of first array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input second array
    printf("Enter elements of second array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    // Calculate sum
    for (i = 0; i < n; i++) {
        sum[i] = arr1[i] + arr2[i];
    }

    // Print arrays
    printf("\nFirst array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr1[i]);
    }

    printf("\nSecond array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }

    printf("\nSum array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", sum[i]);
    }

    return 0;
}
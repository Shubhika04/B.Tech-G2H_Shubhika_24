#include <stdio.h>
int main() {
    int n, ar[100], i, sum=0;
    float avg;
    printf("Enter no. of elements of array: ");
    scanf("%d", &n);
    printf("Enter the elements of array : \n");
    for (i=0; i<n; i++)
    {
        scanf("%d", &ar[i]);
        sum+=ar[i];
        avg=(float)sum/n;
    }
    printf("Sum of array elements = %d", sum);
    printf("\nAverage of array elements = %f", avg);

    return 0;
}
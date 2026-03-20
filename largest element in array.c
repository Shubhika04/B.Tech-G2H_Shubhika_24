#include<stdio.h>
int main()
{
    int n, i;
    printf("Enter the array elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements \n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    
    }
    int largest = arr[0];
    
    for(i=1; i<n; i++)
    {
        if(arr[i]>max)
        {
            largest=arr[i];
        }
        
    }
    printf("Maximum= %d\n", max);
    
    return 0;
}
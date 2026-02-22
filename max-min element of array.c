#include <stdio.h>

int main() {
    // int num1, num2, num3;

    // printf("Enter three numbers: ");
    // scanf("%d %d %d", &num1, &num2, &num3);

    // if (num1 >= num2 && num1 >= num3) {
    //     printf("Greatest number is: %d", num1);
    // }
    // else if (num2 >= num1 && num2 >= num3) {
    //     printf("Greatest number is: %d", num2);
    // }
    // else {
    //     printf("Greatest number is: %d", num3);
    // }

  

int arr[100], n, max, min, i;
printf("Enter the number of elements in array: %d", n);
scanf("%d", &n);

printf("Enter %d elements: \n", n);
for(i=0; i<n; i++) {
    scanf("%d", &arr[i]);
}
max=arr[0];
min=arr[0];
for(i=1; i<n; i++) {
    if(arr[i] > max) {
     max= arr[i];
    }
    if(arr[i]< min) {
        min= arr[i];
    }
}

printf("Maximumum element = %d\n", max);
printf("Minimum element= %d\n", min);


  return 0;
}
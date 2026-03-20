#include <stdio.h>

int main() {
 int n, b, i, a[50],c;
printf("enter size of array 1: ");
scanf("%d", &n);

printf("\nenter elements of array 1:");
for (i=0;i<n;i++)
{printf("a[%d] : ", i);
    scanf("%d", &a[i]);
} 
b=0;
for(i=0;i<n;i++) {
 if((a[i])%2==0) {
b=b+1;
 }

}
printf("\ntotal even elements are %d", b);
printf("\ntotal odd elements are %d ", (n-b));




    return 0;
}
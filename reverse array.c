#include <stdio.h>
int main() 
{
int n, i, a[50],c;
printf("enter size of array 1: ");
scanf("%d", &n);

printf("\nenter elements of array 1:");
for (i=0;i<n;i++)
{printf("a[%d] : ", i);
    scanf("%d", &a[i]);
}
for(i=0; i<n/2; i++)
{
c= a[i];
a[i]=a[n-1-i];
a[n-1-i]= c;
}
printf("reversed array:\n ");
for (i=0; i<n;i++) {
printf("%d", a[i]);    
}
return 0;
}

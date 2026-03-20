#include<stdio.h>
int main() 
{
int n, i, a[50], sum=0;
printf("enter size of array 1: ");
scanf("%d", &n);

printf("\nenter elements of array 1:");
for (i=0;i<n;i++)
{printf("a[%d] : ", i);
    scanf("%d", &a[i]);
    sum = sum + a[i];
}
printf("%d", sum); 
return 0;

}










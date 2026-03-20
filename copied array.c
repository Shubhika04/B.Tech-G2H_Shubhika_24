#include <stdio.h>

int main() {
    int n, i, a[50], b[50];
printf("enter size of array 1: ");
scanf("%d", &n);

printf("\nenter elements of array 1:");
for (i=0;i<n;i++)
{printf("a[%d] : ", i);
    scanf("%d", &a[i]);
}

for(i=0;i<n;i++)
{
  b[i]= a[i];

}
printf("\ncopied array: \n");
for(i=0;i<n;i++) {
    printf("%d", b[i]);
}
    return 0;
}
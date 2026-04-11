#include <stdio.h>

int main() {
int i,j,m,n;
int a[10][10],b[10][10];
printf("Enter the dim of matrix a: /n");
scanf("%d%d", &m, &n);
printf("Enter the matrix:");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d/t", &a[i][j]);
}
}
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
  b[i][j]=a[j][i];
}
}
printf("Transpose matrix b is: ");
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
printf("%d/t", b[i][j]);
}
printf("/n");
}
return 0;   
}
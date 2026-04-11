#include <stdio.h>
int main() {
int i,j,k,m,n;
printf("Enter the number of rows and columns of matrices: ");
scanf("%d%d",&m,&n);;
int a[10][10],b[10][10],sum[10][10];

printf("Enter elements of matrix a: \n");
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        scanf("%d",&a[i][j]);
    }
}
printf("enter element of matrix b: \n");
for(i=0; i<m ;i++) {
    for(j=0; j<n ; j++)
    {
        scanf("%d",&b[i][j]);
    }
    } 
for(i=0; i<m; i++)
{
    for(j=0; j<n ; j++)
    {
    sum[i][j] = a[i][j] + b [i][j];

}
}
printf("the resultant addition matrix is: ");
for(i=0; i<m; i++)
{
    for(j=0; j<n; j++)
    {
        printf("%d\n", sum[i][j]);
    }
    printf("\n");

}
return 0;
}
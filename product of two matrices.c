#include <stdio.h>
int main() {
int i,j,k,r1,c1,r2,c2;
printf("Enter the number of rows and columns of matrix a: ");
scanf("%d%d",&r1,&c1);
printf("Enter the number of rows and columns of matrix b: ");
scanf("%d%d",&r2,&c2);
int a[10][10],b[10][10],sum[10][10],product[10][10];

printf("Enter elements of matrix a: \n");
for(i=0;i<r1;i++){
    for(j=0;j<c1;j++){
        scanf("%d",&a[i][j]);
    }
}
printf("enter element of matrix b: \n");
for(i=0; i<r2 ;i++) {
    for(j=0; j<c2; j++)
    {
        scanf("%d",&b[i][j]);
    }
    } 
    for(i=0; i<r1 ;i++)
{  
    for(j=0; j<c2 ;j++)
    {
        product[i][j]=0;
        for(k=0; k<c1 ;k++)
        {
         product[i][j]+=a[i][k]*b[k][j];
        }
     }
    }
printf("\nProduct of two matrices: \n");
for(i=0; i<r1 ;i++) {
    for(j=0; j<c2 ;j++)
    {
        printf("%d ",product[i][j]);
    }
    printf("\n");
}

 return 0;   
}
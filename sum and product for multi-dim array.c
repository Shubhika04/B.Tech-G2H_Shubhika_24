#include <stdio.h>
int main() {
int i,j,k,r1,c1,r2,c2;
printf("Enter the number of rows and columns of matrix a: ");
scanf("%d%d",&r1,&c1);
printf("Enter the number of rows and columns of matrix b: ");
scanf("%d%d",&r2,&c2);
int a[r][c],b[r][c],sum[r][c],product[r][c];

printf("Enter elements ofmatrix a: \n");
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        scanf("%d",&a[i][j]);
    }
}
    printf("enter element of matrix b: \n");
    for(i=0; i<r;i++) {
        for(j=0; j<c;j++){
            scanf("%d",&b[i][j]);
        }
    }
for(i=0; i<r;i++) {
    for(j=0; j<c;j++)
    {
        sum[i][j]=a[i][j]+b[i][j];
    }
}

for(i=0; i<r;i++)
{    for(j=0; j<c;j++)
    {
        product[i][j]=0;
        for(k=0; k<c;k++){
            product[i][j]+=a[i][k]*b[k][j];
        }
     }
    }

printf("\nSum of two matrices: \n");
for(i=0; i<r;i++) {
    for(j=0; j<c;j++)
    {
        printf("%d ",sum[i][j]);
    }
    printf("\n");    
}
printf("\nProduct of two matrices: \n");
for(i=0; i<r;i++) {
    for(j=0; j<c;j++)
    {
        printf("%d ",product[i][j]);
    }
    printf("\n");
}

 return 0;   
}
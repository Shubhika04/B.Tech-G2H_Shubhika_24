#include<stdio.h>
int main () {
int a[10][10],n,i,j;
int isSymmetric= 1;
// only square matrix can be symmetric
printf("enter the dim of matrix:\n");
scanf("%d",&n);
printf("enter the elements of matrix:\n");
for(i=0;i<n;i++) {
    for(j=0;j<n;j++) {
        scanf("%d",&a[i][j]);
    }
}for(i=0;i<n;i++)
{
    for(j=0;j<n;j++) {
        if(a[i][j]!=a[j][i]) {
            isSymmetric = 0;
            break;
        }
    }
}
if(isSymmetric == 1) {
    printf("The matrix is symmetric");
} else {
    printf("The matrix is not symmetric");
}
 return 0;
}   
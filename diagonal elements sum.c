#include<stdio.h>
int main () {
int a[10][10],m,n,i,j,s1=0,s2=0;
printf("enter the dim of matrix:\n");
scanf("%d%d",&m,&n);
printf("enter the elements of matrix:\n");

for(i=0;i<m;i++) {
    for(j=0;j<n;j++) {
        scanf("%d",&a[i][j]);
    }
}
if(m==n)
{
for(i=0;i<m;i++) {
    s1=s1+a[i][i];
}
for(i=0;i<m;i++) {
    s2=s2+a[i][m-1-i];
}
printf("sum of main diagonal elements is %d\n",s1);
printf("sum of off diagonal elements is %d\n",s2);
}
else{
printf("required sum is not possible");
}
return 0;
}

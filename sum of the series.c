#include <stdio.h
int main() {
int n,i;
float sum=0.0;
printf("enter the value of n: \n");
scanf("%d",&n);
for(i=1;i<=n;i++){
sum=sum+(1.0/i);
}
printf("the sum of the series is: %f\n",sum);
return 0;
}
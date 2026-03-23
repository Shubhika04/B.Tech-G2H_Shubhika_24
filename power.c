#include <stdio.h>
int main()
{
int x,a,b, result=1;
printf("enter base: \n");
scanf("%d", &a);
printf("enter exponent: \n");
scanf("%d", &b);
x=b;
while(b!=0)
{
result= a*result;
--b;
}
printf("%d raised to the power %d is %d", a,x,result);
return 0;
}  

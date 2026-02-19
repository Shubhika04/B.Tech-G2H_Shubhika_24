#include<stdio.h>
int main ()
{
int a,b,c;
printf("enter the value of a:  \n");
scanf("%d",&a);
printf("enter the value of b:  \n");
scanf("%d", &b);
printf("Before swapping a=%d, b=%d \n", a,b);
c=a;
a=b;
b=c;
printf("After swapping a=%d, b=%d\n", a,b);

return 0;





}

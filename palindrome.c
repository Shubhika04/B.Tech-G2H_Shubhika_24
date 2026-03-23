#include <stdio.h>
int main() {
int n,rem, reverse=0, x;
printf("enter a number: \n");
scanf("%d", &n);
x=n;
while(n!=0)
{
rem= n%10;
reverse= reverse*10 + rem;
n=n/10;
}
if(reverse==x)
{
    printf("number is palindrome");
}
else
{
    printf("number is not palindrome");

}
return 0;
}









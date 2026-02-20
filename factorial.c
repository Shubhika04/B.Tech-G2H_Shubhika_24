// Online C compiler to run C program online
#include<stdio.h>
int main(){
   int i,n, factorial=1;
   printf(" enter a number: \n");
   scanf("%d", &n);
   if (n<0) {
    printf("Invalid input");
   }
   else{
    i=1;
    while (i<=n)
    {
    factorial= factorial*i;
    i++;
    }
    printf("factorial is %d", factorial);
    
   }
    return 0;
}
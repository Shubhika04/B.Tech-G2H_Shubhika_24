#include<stdio.h>
int main() 
{
float km, miles;
printf(" Enter distance in kilometers: \n");
scanf("%f", &km);
miles = km*0.621;
printf("Miles = %f\n", miles);
printf(" Enter the distance in miles: \n ");
scanf("%f", &miles);
km = miles * 1.609;
printf("Kilometers = %f\n", km);

return 0;
}
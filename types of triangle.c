#include<stdio.h>
int main() {
float a,b,c;
printf("Enter three sides of a triangle: ");
scanf("%f %f %f", &a,&b,&c);
 if (a+b > c && b+c>a && a+c>b) {
    printf("valid triangle");
    if (a==b && b==c && c=a) {
        printf(" triangle is equilateral");
    }
    else if ( a!=b && b!=c && c!= a) {
        printf("triangle is scalene");
    }
    else {
        printf("triangle is isosceles");

    }
 else{
    printf("triangle is invalid");
 }
}
 

}
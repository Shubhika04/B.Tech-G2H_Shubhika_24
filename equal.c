// // #include<stdio.h>
// // int main()
// // {
// // float km, miles;
// // printf(" Enter distance in kilometers: \n");
// // scanf("%f", &km);
// // miles = km*0.621;
// // printf("Miles = %f\n", miles);
// // printf(" Enter the distance in miles: \n ");
// // scanf("%f", &miles);
// // km = miles * 1.609;
// // printf("Kilometers = %f\n", km);

// // return 0;
// // }

// #include <stdio.h>
// int main()
// {
//     char q;
//     printf(" Enter a character= ");
//     scanf("%c", &q);
//     if (q == 'a' || q == 'e' || q == 'i' || q == 'o' || q == 'u' ||
//         q == 'A' || q == 'E' || q == 'I' || q == 'O' || q == 'U' )
//     {
//         printf("character is vowel");
//     }
//     else
//     {

//         printf(" character is consonant");
//     }

//     return 0;
// }
#include<stdio.h>
int main() {
    int a,b;
    printf("enter first number: \n");
    scanf("%d", &a);
    printf("enter second number: \n");
    scanf("%d", &b);
    if(a==b) { 
    printf("the numbers are equal \n");
    }
    else{
    printf("the numbers are not equal \n");
    }
return 0;
}
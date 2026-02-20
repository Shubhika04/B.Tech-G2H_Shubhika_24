#include <stdio.h>
 int main(){
    float num1, num2;
    char op;

    printf("Enter First Number: ");
    scanf("%f", &num1);

    printf("Enter an Operator (+,-,*,/) : ");
    scanf(" %c", &op);

    printf("Enter Second Number: ");
    scanf("%f", &num2);

    switch (op) {
        case'+':
             printf("Result = %f", (num1+num2));
             break;
        case'-':
             printf("Result = %f", (num1-num2));
             break;
        case '*':
             printf("Result = %f", (num1*num2));
             break;  
        case '/':
           if (num2 != 0) printf("Result = %f", (num1/num2));
             else 
                 printf("Error! Division by zero is not allowed.");
                break;
                
                default:
                printf("Invalid operator!");
    }
    return 0;
 }
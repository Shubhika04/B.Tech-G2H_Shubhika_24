#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time;
    float simpleInterest, compoundInterest;

    printf("Enter Principal amount: ");
    scanf("%f", &principal);

    printf("Enter Rate of interest : ");
    scanf("%f", &rate);

    printf("Enter Time (in years): ");
    scanf("%f", &time);

    // Simple Interest
    simpleInterest = (principal * rate * time) / 100;

    // Compound Interest
    compoundInterest =  principal * pow((1 + rate / 100), time) - principal;

    printf("\nSimple Interest = %.f\n", simpleInterest);
    printf("Compound Interest = %.f\n", compoundInterest);

    return 0;
}






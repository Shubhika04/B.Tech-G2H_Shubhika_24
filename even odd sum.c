

#include <stdio.h>

int main() {
    int N, i, evenSum = 0, oddSum = 0;

    printf("Enter a number: ");
    scanf("%d", &N);

    for(i = 1; i <= N; i++) {
        if(i % 2 == 0)
            evenSum += i;
        else
            oddSum += i;
    }

    printf("Sum of even numbers from 1 to %d = %d\n", N, evenSum);
    printf("Sum of odd numbers from 1 to %d = %d\n", N, oddSum);

    return 0;
}








    









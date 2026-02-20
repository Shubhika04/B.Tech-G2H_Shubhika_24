#include <stdio.h>
 int main() {
    float M1, M2, M3, M4, M5;
    float sum, percentage;
    
    printf("Enter the Marks of 5 Subjects : ");
    scanf("%f %f %f %f %f", &M1, &M2, &M3, &M4, &M5);
 
    sum = M1 + M2 + M3 + M4 + M5;
    percentage = (sum / 500) * 100;
    
    printf("\n Total Marks = %.2f", sum);
    printf("\n Overall Percentage = %.2f%%", percentage);
    
    return 0;
 }
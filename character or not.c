#include <stdio.h>

int main(){
    char ch;
    printf("enter a character:");
    scanf("%c", &ch);
    
    if (ch>= '0' && ch <='9') {
        printf("it is a digit");

    }
    else if ((ch>= 'a' && ch<= 'z') || (ch >= 'A' && ch <= 'Z' )) { 
        printf("it is an alphabet character");

    }
    else{
        printf("it is a speacial character");
    }
    return 0;
}
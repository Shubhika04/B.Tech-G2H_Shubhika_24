

#include <stdio.h>
int main()
{
    char q;
    printf(" Enter a character= ");
    scanf("%c, &q");
    if (q == 'a' || q == 'e' || q == 'i' || q == 'o' || q == 'u' ||
        q == 'A' || q == 'E' || q == 'I' || q == 'O' || q == 'U' )
    {
        printf("character is vowel");
    }
    else
    {

        printf(" character is consonant");
    }

    return 0;
}
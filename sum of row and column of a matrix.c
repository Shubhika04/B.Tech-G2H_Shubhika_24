#include <stdio.h>

int main() {
    int a[10][10], r, c, i, j, s;

    printf("Rows and Cols: ");
    scanf("%d %d", &r, &c);

    printf("Enterl elements of a matrix:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < r; i++) {
        s = 0;
        for(j = 0; j < c; j++) 
        s += a[i][j];
        printf("Row %d sum: %d\n", i + 1, s);
    }

    for(j = 0; j < c; j++) {
        s = 0;
        for(i = 0; i < r; i++) 
        s += a[i][j];
        printf("Col %d sum: %d\n", j + 1, s);
    }

    return 0;
}

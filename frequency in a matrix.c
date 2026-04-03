#include<stdio.h>
int main(){
    int a[50][50],i,j,m,n,num,count=0;
    printf("Enter dim of matrix: ");
    scanf("%d %d", &m, &n);

    printf("Enter elements of matrix:\n");;
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the number to find frequency:");
    scanf("%d", &num);
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++){
           if(a[i][j] == num) {
            count++;
        }

        }
    }
    printf("frequency of %d = %d\n", num, count);

    return 0;
}

                    
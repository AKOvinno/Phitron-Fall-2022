#include<stdio.h>

int main()
{
    int n, i, j, k;
    scanf("%d", &n);
    int ara[n][n];
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &ara[i][j]);
        }
    }
    for(k = 0; k < n; k++) {
        printf("row - %d and column - %d =    ", k+1, k+1);
        for(i = k, j = 0; j < n; j++) {
            if(i == j){
                continue;
            }
            printf("%d ", ara[i][j]);
        }
        for(j = k, i = 0; i < n; i++) {
            if(i == j) {
                continue;
            }
            printf("%d ", ara[i][j]);
        }
        printf("\n");
    }
    return 0;
}

#include<stdio.h>

int main()
{
    int n, m, i, j;
    scanf("%d %d", &n, &m);
    int ara[n][m];
    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            scanf("%d", &ara[i][j]);
        }
    }
    printf("\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            printf("%d ", ara[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            printf("%d ", ara[j][i]);
        }
        printf("\n");
    }
    return 0;
}

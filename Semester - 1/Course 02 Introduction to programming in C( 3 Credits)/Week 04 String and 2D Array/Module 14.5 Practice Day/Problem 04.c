#include<stdio.h>

int main()
{
    int n, m, i, j, k;
    scanf("%d %d", &n, &m);
    int ara1[n][m];
    int ara2[n][m];
    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            scanf("%d", &ara1[i][j]);
        }
    }
    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            scanf("%d", &ara2[i][j]);
        }
    }
    int ans_ara[n][m];
    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            ans_ara[i][j] = 0;
            for(k = 0; k < n; k++) {
                ans_ara[i][j] += ara1[i][k] * ara2[k][j];
            }
        }
    }
    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            printf("%d ", ans_ara[i][j]);
        }
        printf("\n");
    }
    return 0;
}

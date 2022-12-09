#include<stdio.h>

int main()
{
    int n, m, i, j;
    scanf("%d %d", &n, &m);
    int ara_one[n][m], ara_two[n][m], ara_ans[n][m];
    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            ara_ans[i][j] = 0;
        }
    }
    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            scanf("%d", &ara_one[i][j]);
        }
    }
    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            scanf("%d", &ara_two[i][j]);
        }
    }
    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            ara_ans[i][j] = ara_one[i][j] + ara_two[i][j];
        }
    }
    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            printf("%d ", ara_ans[i][j]);
        }
        printf("\n");
    }
    return 0;
}

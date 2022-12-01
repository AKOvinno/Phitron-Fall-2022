#include<stdio.h>

int main()
{
    int i, j, n, m, sum = 0, allsum = 0;
    scanf("%d %d", &n, &m);
    int ara[n][m];
    if(n == m) {
        for(i = 0; i < n; i++) {
            for(j = 0; j < m; j++) {
                scanf("%d", &ara[i][j]);
            }
        }
        for(i = 0; i < n; i++) {
            for(j = 0; j < m; j++) {
                allsum += ara[i][j];
                if(i == j && ara[i][j] > 0) {
                    sum += ara[i][j];
                }
            }
        }
    }
    else {
        printf("The matrix isn't identical\n");
    }
    if(allsum == sum && sum == 3) {
        printf("The matrix is identical\n");
    }
    else {
        printf("The matrix isn't identical\n");
    }
    return 0;
}


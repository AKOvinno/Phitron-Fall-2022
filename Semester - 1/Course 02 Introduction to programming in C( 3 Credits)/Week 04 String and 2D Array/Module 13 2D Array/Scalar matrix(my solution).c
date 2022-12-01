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
        printf("The matrix isn't scalar\n");
    }
    if(allsum == sum && sum != 0 && sum/n == ara[0][0]) {
        printf("The matrix is scalar\n");
    }
    else {
        printf("The matrix isn't scalar\n");
    }
    return 0;
}


#include<stdio.h>

int main()
{
    int n, m, i, j, ans = 1;
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
                if(i == j) {
                    if(ara[i][j] != ara[0][0]) {
                        ans = 0;
                    }
                    continue;
                }

                if(ara[i][j] != 0) {
                    ans = 0;
                }
            }
        }
        if(ans == 0) {
            printf("Not Scalar\n");
        }
        else {
            printf("Scalar\n");
        }
    }
    else {
        printf("Not Scalar\n");
    }
}

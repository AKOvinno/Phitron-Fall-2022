#include<stdio.h>

int main()
{
    int n = 3, t, i, j, a, b, count = 0;
    int ara[n][n];
    scanf("%d", &t);
    int ara2[t][2];
    for(i = 1; i <= 3; i++) {
        for(j = 1; j <= 3; j++) {
            ara[i][j] = 0;
        }
    }
    while(t) {
        scanf("%d %d", &a, &b);
        ara[a][b] = 1;
        t--;
    }
    printf("\n");

    for(i = 1; i <= 3; i++) {
        for(j = 1; j <= 3; j++) {
            if(ara[i][j] == 0) {
                count++;
            }
        }
    }
    printf("Total empty cells - %d\n", count);
    for(i = 1; i <= 3; i++) {
        for(j = 1; j <= 3; j++) {
            if(ara[i][j] == 0) {
                printf("%d %d\n", i, j);
            }
        }
    }
    return 0;
}

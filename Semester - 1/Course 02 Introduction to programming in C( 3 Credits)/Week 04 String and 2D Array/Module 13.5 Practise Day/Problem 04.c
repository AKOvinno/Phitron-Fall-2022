#include<stdio.h>

int main()
{
    int N, M;
    scanf("%d %d", &N, &M);
    int ara1[N][M], ara2[N][M];

    int i, j;

    for(i = 0; i < N; i++) {
        for(j = 0; j < M; j++) {
            scanf("%d", &ara1[i][j]);
        }
    }

    for(i = 0; i < N; i++) {
        for(j = 0; j < M; j++) {
            scanf("%d", &ara2[i][j]);
        }
    }
    for(i = 0; i < N; i++) {
        for(j = 0; j < M; j++) {
            printf("%d ", ara1[i][j]+ara2[i][j]);
        }
        printf("\n");
    }
    return 0;
}

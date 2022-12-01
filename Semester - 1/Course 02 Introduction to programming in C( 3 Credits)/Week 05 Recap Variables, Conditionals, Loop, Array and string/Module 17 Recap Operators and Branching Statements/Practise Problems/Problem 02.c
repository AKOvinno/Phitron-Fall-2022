#include<stdio.h>

int main()
{
    int i, j, k = 1, N;
    scanf("%d", &N);
    for(i = 1; k < N; i++) {
        for(j = 1; j <= i; j++, k++) {
            printf("%d ", k);
        }
        printf("\n");
    }
    return 0;
}

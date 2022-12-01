#include<stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int i, j;
    for(i = 1; i <= N; i++) {
            for(j = 1; j <= i; j++) {
                printf("*");
            }
        printf("\n");
    }
    return 0;
}

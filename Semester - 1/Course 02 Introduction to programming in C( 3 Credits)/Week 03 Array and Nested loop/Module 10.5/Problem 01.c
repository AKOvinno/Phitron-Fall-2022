#include<stdio.h>

int main()
{
    int N, i;
    scanf("%d", &N);
    int ara[N];
    ara[0] = 0;
    ara[1] = 1;
    for(i = 2; i < N; i++) {
        ara[i] = ara[i-1] + ara[i-2];
    }
    for(i = 0; i < N; i++) {
        printf("%d ", ara[i]);
    }
    return 0;
}

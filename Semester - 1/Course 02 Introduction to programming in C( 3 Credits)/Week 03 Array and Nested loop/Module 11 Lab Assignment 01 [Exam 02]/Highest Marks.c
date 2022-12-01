#include<stdio.h>

int main()
{
    int i, N, max;
    scanf("%d", &N);
    int ara[N];
    for(i = 0; i < N; i++) {
        scanf("%d", &ara[i]);
    }
    max = ara[0];
    for(i = 0; i < N; i++) {
        if(ara[i] > max) {
            max = ara[i];
        }
    }
    for(i = 0; i < N; i++) {
        ara[i] = max - ara[i];
    }
    for(i = 0; i < N; i++) {
        printf("%d ", ara[i]);
    }
    return 0;
}

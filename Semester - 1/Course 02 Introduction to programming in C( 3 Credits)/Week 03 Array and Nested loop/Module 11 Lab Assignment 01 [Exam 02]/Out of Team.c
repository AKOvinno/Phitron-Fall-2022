#include<stdio.h>
int main()
{
    int i, N, K, count = 0;
    scanf("%d %d", &N, &K);
    int ara[N];
    for(i = 0; i < N; i++) {
        scanf("%d", &ara[i]);
    }
    for(i = 0; i < N; i++) {
        if(ara[i] < K) {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}

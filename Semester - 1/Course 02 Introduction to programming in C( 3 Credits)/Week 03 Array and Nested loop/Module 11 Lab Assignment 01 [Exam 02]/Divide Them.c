#include<stdio.h>
int main()
{
    int i, j, N, k;
    scanf("%d", &N);
    int ara[N];
    int ara_new[N];
    for(i = 0; i < N; i++) {
        scanf("%d", &ara[i]);
    }
    scanf("%d", &k);
    int girls[k-1];
    for(i = k, j = 0; i < N, j < (N-k); i++, j++) {
        ara_new[j] = ara[i];
    }
    for(i = 0, j = (N-k); i < k, j < N; i++, j++) {
        ara_new[j] = ara[i];
    }
    for(i = 0; i < N; i++) {
        printf("%d ", ara_new[i]);
    }
    return 0;
}

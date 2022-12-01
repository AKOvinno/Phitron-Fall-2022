#include<stdio.h>

int main()
{
    int i, N;
    scanf("%d", &N);
    int ara[N];
    for(i = 0; i < N; i++) {
        scanf("%d", &ara[i]);
    }
    for(i = (N-1); i >= 0; i--) {
        printf("%d ", ara[i]);
    }
    return 0;
}

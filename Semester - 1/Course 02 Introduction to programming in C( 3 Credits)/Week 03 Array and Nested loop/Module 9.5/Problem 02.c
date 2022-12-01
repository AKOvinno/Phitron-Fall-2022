#include<stdio.h>

int main()
{
    int N, i, Q, index, value;
    scanf("%d", &N);
    int ara[N];
    for(i = 0; i < N; i++) {
        scanf("%d", &ara[i]);
    }
    scanf("%d", &Q);
    for(i = 0; i < Q; i++) {
        scanf("%d %d", &index, &value);
        ara[index]+=value;
    }
    for(i = 0; i < N; i++) {
        printf("%d ", ara[i]);
    }
    return 0;
}

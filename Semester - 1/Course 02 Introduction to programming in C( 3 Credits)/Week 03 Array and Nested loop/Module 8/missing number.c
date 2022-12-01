#include<stdio.h>
int main()
{
    int N, x;
    int ara[200001];
    int i;

    scanf("%d", &N);

    for(i = 1; i < N; i++) {
        scanf("%d", &x);
        ara[x] = 1;
    }

    for(i = 1; i <= N; i++) {
        if(ara[i] == 0) {
            printf("%d\n", i);
            break;
        }
    }
    return 0;
}

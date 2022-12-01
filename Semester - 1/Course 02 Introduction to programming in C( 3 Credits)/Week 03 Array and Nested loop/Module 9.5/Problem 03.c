#include<stdio.h>

int main()
{
    int N, i, count = 0;
    scanf("%d", &N);
    int ara[N];
    for(i = 0; i < N; i++) {
        scanf("%d", &ara[i]);
    }
    int first = ara[0];
    for(i = 0; i < N; i++) {
        if(ara[i] != first) {
            printf("NO\n");
            count++;
            break;
        }
    }
    if(count == 0) {
        printf("YES\n");
    }
    return 0;
}

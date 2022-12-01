#include<stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t) {
        int N, i, closest;
        scanf("%d", &N);
        int ara[N];
        for(i = 0; i < N; i++) {
            scanf("%d", &ara[i]);
        }
        closest = ara[0];
        for(i = 1; i < N; i++) {
            if(ara[i] > closest) {
                closest = ara[i];
            }
        }
        printf("%d\n", closest);
        t--;
    }
    return 0;
}

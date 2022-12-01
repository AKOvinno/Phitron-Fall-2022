#include<stdio.h>

int main()
{
    int N, i, j, counter = 0;
    scanf("%d", &N);
    int ara[N];

    for(i = 0; i < N; i++) {
        scanf("%d", &ara[i]);
    }

    for(i = 0; i < N; i++) {
        if(ara[i] < 2) {
            ara[i] = 0;
        }
        else {
            for(j = 2; j <= ara[i]/2; j++) {
                if(ara[i] % j == 0) {
                    ara[i] = 0;
                }
            }
        }
    }
    for(i = 0; i < N; i++) {
        if(ara[i] != 0) {
            counter++;
        }
    }
    printf("%d\n", counter);
    for(i = 0; i < N; i++) {
        if(ara[i] != 0) {
            printf("%d ", ara[i]);
        }
    }
    return 0;
}

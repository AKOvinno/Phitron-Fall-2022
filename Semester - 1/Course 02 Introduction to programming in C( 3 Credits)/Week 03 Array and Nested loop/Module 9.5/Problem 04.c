#include<stdio.h>
int main()
{
    int i, j, N;
    scanf("%d", &N);
    int ara[N];
    for(i = 0; i < N; i++) {
        scanf("%d", &ara[i]);
    }
    for(i = 0; i < N; i++) {
        printf("%d - ", ara[i]);
        for(j = 0; j < N; j++) {
            if(ara[i] != ara[j]) {
                printf("%d ", ara[j]);
            }
        }
        printf("\n");
    }
    return 0;
}

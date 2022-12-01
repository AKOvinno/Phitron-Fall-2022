#include<stdio.h>

int main()
{
    int i, j, N, K, sum = 0;
    scanf("%d %d", &N, &K);
    for(i = 100; i <= N*100; i+=100) {
        for(j = i+1; j <= K+i; j++) {
            sum+=j;
        }
    }
    printf("%d\n", sum);
    return 0;
}

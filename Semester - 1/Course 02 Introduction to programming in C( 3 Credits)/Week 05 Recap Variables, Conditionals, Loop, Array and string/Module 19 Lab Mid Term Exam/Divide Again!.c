#include<stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int ans = N/3;
    if((ans*3) == N) {
        printf("%d\n", ans);
    }
    else {
        printf("-1\n");
    }
    return 0;
}

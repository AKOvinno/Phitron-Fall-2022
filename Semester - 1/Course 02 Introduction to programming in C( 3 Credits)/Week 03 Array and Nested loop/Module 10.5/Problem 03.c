#include<stdio.h>

int main()
{
    int N, i, sum = 0;
    scanf("%d", &N);
    int ara[N];
    for(i = 0; i < N; i++) {
        scanf("%d", &ara[i]);
    }
    for(i = 0; i < N; i++) {
        if(ara[i] % 2 != 0) {
            sum+=ara[i];
        }
    }
    if(sum % 2 == 0) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
    return 0;
}

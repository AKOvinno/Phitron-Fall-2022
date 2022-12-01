#include<stdio.h>

int main()
{
    int i, j, N, target, sum = 0, is_NO = 1;
    scanf("%d", &N);
    int ara[N];
    for(i = 0; i < N; i++) {
        scanf("%d", &ara[i]);
    }
    scanf("%d", &target);
    for(i = 0; i < (N-1); i++) {
        sum = ara[i];
        for(j = (i+1); j < N; j++) {
            sum+=ara[j];
            if(sum == target) {
                printf("YES\n");
                is_NO = 0;
                break;
            }
            sum = ara[i];
        }
    }
    if(is_NO == 1) {
        printf("NO\n");
    }
    return 0;

}

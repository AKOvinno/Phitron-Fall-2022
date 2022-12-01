#include<stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t) {
        int N, C, i, sum = 0;
        scanf("%d %d", &N, &C);
        int a[N];
        for(i = 0; i < N; i++) {
            scanf("%d", &a[i]);
            sum += (2*a[i]);
        }
        if(sum <= C) {
            printf("Yes\n");
        }
        else {
            printf("No\n");
        }
        t--;
    }
    return 0;
}

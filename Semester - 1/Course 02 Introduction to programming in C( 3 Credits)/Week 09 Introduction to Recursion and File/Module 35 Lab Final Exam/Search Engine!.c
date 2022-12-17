#include<stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for(int k = 1; k <= t; k++) {
        int n, i, s, flag = 1;
        scanf("%d", &n);
        int ara[n];
        for(i = 0; i < n; i++) {
            scanf("%d", &ara[i]);
        }
        scanf("%d", &s);
        for(i = 0; i < n; i++) {
            if(ara[i] == s) {
                printf("Case %d: %d\n", k, i+1);
                flag = 0;
                break;
            }
        }
        if(flag) printf("Case %d: Not Found\n", k);
    }
}

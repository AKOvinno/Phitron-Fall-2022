#include<stdio.h>
int min(int a, int b)
{
    if(a > b)
        return b;
    else
        return a;
}
int main()
{
    int t, i, j;
    scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);
        int ara[n];
        for(i = 0; i < n; i++) {
            scanf("%d", &ara[i]);
        }
        for(i = 0; i < n; i++) {
            for(j = 1; j < n; j++) {
                if(ara[j] < ara[j-1]) {
                    int temp = ara[j];
                    ara[j] = ara[j-1];
                    ara[j-1] = temp;
                }
            }
        }
        int ans = 2e9;
        for(i = 2; i < n; i++) {
            ans = min(ans, ara[i] - ara[i-2]);
        }
        printf("%d\n", ans);
    }
    return 0;
}

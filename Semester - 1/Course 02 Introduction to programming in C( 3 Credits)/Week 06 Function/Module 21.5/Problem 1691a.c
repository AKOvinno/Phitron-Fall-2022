#include<stdio.h>
int main()
{
    int i, t;
    scanf("%d", &t);
    while(t--) {
        int n, odd = 0, even = 0;
        scanf("%d", &n);
        int ara[n];
        for(i = 0; i < n; i++) {
            scanf("%d", &ara[i]);
        }
        for(i = 0; i < n; i++) {
            if(ara[i] % 2 != 0) {
                odd++;
            }
            else {
                even++;
            }
        }
        if(odd > even) {
            printf("%d\n", even);
        }
        else {
            printf("%d\n", odd);
        }
    }
    return 0;
}

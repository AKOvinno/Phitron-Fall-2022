#include<stdio.h>

int main()
{
    int t, i;
    scanf("%d", &t);
    while(t--) {
        int n, max;
        scanf("%d", &n);
        int ara[n];
        for(i = 0; i < n; i++) {
            scanf("%d", &ara[i]);
        }
        max = ara[0];
        for(i = 0; i < n; i++) {
            if(ara[i] > max) {
                max = ara[i];
            }
        }
        int index = -1;
        for(i = 0; i < n; i++) {
            if(ara[i] != max)
                continue;
            if(i > 0 && ara[i-1] != max) index = i+1;
            if(i < n-1 && ara[i+1] != max) index = i+1;
        }
        printf("%d\n", index);
    }
    return 0;
}


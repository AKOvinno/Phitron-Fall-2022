#include<stdio.h>

int gcd(int a, int b)
{
    int min;
    if(a > b) {
        min = b;
    }
    else {
        min = a;
    }
    for(int i = min; i >= 1; i--) {
        if(a % i == 0 && b % i == 0) {
            return i;
        }
    }
    return 0;
}

int main()
{
    int t, i, j;
    scanf("%d", &t);
    while(t--) {
        int n, count = 0;
        scanf("%d", &n);
        int ara[n];
        for(i = 0; i < n; i++) {
            scanf("%d", &ara[i]);
        }
        for(i = 0; i < n; i++) {
            for(j = 0; j < n; j++) {
                if(i == j)
                    continue;
                if(gcd(ara[i], ara[j]) == 1)
                    count++;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}

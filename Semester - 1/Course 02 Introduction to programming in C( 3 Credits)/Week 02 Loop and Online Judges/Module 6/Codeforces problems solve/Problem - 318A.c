#include<stdio.h>

int main()
{
    int n, k, i, j;
    scanf("%d %d", &n, &k);
    int ara[n];
    for(i = 1, j = 0; i <= n, j < (n/2); i+=2, j++) {
        ara[j] = i;
    }

    for(i = 2, j = (n/2)+1; i <= n, j < n; i+=2, j++) {
        ara[j] = i;
    }
    for(i = 0; i < n; i++) {
        printf("%d ", ara[i]);
    }
    printf("%d\n", ara[k-1]);
    return 0;
}

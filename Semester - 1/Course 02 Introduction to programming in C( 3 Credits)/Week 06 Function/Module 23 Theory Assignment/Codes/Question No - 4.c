#include<stdio.h>

int main()
{
    int n, k, i, j = 0;
    scanf("%d %d", &n, &k);
    int ara[n];
    for(i = 1; i <=n; i++) {
        if(i % 2 == 0) {
            ara[j] = i;
            j++;
        }
    }
    for(i = 1; i <= n; i++) {
        if(i % 2 != 0) {
            ara[j] = i;
            j++;
        }
    }
    for(i = 0; i < n; i++) {
        printf("%d ", ara[i]);
    }
    printf("\n");
    printf("The %dth element in this sequence is %d.\n", k, ara[k-1]);
    return 0;
}

#include<stdio.h>

int main()
{
    int i, j, n, temp;
    scanf("%d", &n);
    int ara[n];
    for(i = 0; i < n; i++) {
        scanf("%d", &ara[i]);
    }
    for(i = 0, j = n-1; i < n, j > i; i++, j--) {
        temp = ara[i];
        ara[i] = ara[j];
        ara[j] = temp;
    }
    for(i = 0; i < n; i++) {
        printf("%d ", ara[i]);
    }
    return 0;
}

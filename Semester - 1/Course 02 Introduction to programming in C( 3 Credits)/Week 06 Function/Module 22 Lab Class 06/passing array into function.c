#include<stdio.h>

int add(int n, int ara[])
{
    int i, sum = 0;
    for(i = 0; i < n; i++) {
        sum += ara[i];
    }
    return sum;
}

int main()
{
    int n, i;
    scanf("%d", &n);
    int ara[n];
    for(i = 0; i < n; i++) {
        scanf("%d", &ara[i]);
    }
    printf("%d\n", add(n, ara));
    return 0;
}

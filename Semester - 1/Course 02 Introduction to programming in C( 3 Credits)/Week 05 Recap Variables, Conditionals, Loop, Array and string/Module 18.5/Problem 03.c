#include<stdio.h>

int main()
{
    int n, i;
    scanf("%d", &n);
    int ara[n];
    for(i = 0; i < n; i++) {
        scanf("%d", &ara[i]);
    }
    int sum = 0;
    for(i = 0; i < n; i++) {
        sum += (ara[i] % 10);
    }
    printf("Sum = %d\n", sum);
    return 0;
}

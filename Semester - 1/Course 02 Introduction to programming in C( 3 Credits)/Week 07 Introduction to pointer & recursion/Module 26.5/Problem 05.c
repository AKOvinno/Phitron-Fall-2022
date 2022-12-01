#include<stdio.h>

int is_last_digit_zero(int n)
{
    if(n % 10 == 0)
        return 1;
    else
        return 0;
}

int main()
{
    int n, i, sum = 0;
    scanf("%d", &n);
    int ara[n];
    for(i = 0; i < n; i++) {
        scanf("%d", &ara[i]);
    }
    for(i = 0; i < n; i++) {
        if(is_last_digit_zero(ara[i]))
            sum += ara[i];
    }
    printf("%d\n", sum);
    return 0;
}

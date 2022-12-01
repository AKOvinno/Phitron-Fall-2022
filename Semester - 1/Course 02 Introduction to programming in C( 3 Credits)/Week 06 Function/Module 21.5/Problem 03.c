#include<stdio.h>

int first_last_digit(int num)
{
    int sum = 0;
    sum += (num % 10);
    sum += (num / 1000);

    return sum;
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
        sum += first_last_digit(ara[i]);
    }
    printf("Sum = %d\n", sum);
    return 0;
}

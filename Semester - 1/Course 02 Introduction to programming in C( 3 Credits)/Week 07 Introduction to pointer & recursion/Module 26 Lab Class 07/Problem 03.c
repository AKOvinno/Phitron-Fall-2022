#include<stdio.h>

int sum_of_digits(int a)
{
    int summ = 0;
    while(a > 0)
    {
        summ += (a % 10);
        a /= 10;
    }
    return summ;
}

int is_prime(int n)
{
    int i;
    for(i = 2; i < n; i++) {
        if(n%i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int n;
    scanf("%d", &n);

    if(is_prime(sum_of_digits(n)) == 1)
        printf("Ovinno's Number\n");
    else
        printf("No\n");
    return 0;
}

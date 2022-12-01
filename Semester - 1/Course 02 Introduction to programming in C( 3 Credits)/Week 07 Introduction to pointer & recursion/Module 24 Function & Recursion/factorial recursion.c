#include<stdio.h>

int factorial(int n)
{
    if(n == 0)
        return 1;
    else
        return n*factorial(n-1);
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", factorial(n));
    return 0;
}

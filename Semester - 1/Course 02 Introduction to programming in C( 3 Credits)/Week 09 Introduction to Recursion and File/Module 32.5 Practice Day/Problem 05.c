#include<stdio.h>

int summ(int n)
{
    if(n == 1) return 1;
    else return n + summ(n - 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", summ(n));
    return 0;
}

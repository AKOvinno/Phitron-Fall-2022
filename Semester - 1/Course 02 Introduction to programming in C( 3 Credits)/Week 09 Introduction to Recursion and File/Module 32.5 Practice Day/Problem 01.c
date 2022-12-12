#include<stdio.h>

int power(int n, int i)
{
    if(i == 1) return n;
    return n*power(n, i - 1);
}

int main()
{
    int n, i;
    scanf("%d %d", &n, &i);
    printf("%d\n", power(n, i));
    return 0;
}

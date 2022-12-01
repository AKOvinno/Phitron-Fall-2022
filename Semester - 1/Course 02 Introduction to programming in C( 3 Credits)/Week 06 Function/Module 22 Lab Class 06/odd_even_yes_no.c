#include<stdio.h>

int is_Even(int x)
{
    if(x%2 == 0)
        return 1;
    else
        return 0;
}

int main()
{
    int n;
    scanf("%d", &n);
    if(is_Even(n))
        printf("Even\n");
    else
        printf("Odd\n");
    return 0;
}

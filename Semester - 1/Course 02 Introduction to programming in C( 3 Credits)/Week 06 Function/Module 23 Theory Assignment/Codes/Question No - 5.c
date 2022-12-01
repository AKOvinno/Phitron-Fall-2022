#include<stdio.h>

int add_three_nums(int a, int b, int c)
{
    return a+b+c;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", add_three_nums(a, b, 0));
    return 0;
}

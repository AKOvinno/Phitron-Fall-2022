#include<stdio.h>

int main()
{
    int a = 5, b = 6;

    int c = a&b;
    int d = a|b;
    int e = a!=b;

    printf("%d\n", c);
    printf("%d\n", d);
    printf("%d\n", e);

    return 0;
}

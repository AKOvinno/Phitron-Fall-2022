#include<stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d", &a, &b);
    c = (a > b) ? a : b;
    printf("%d\n", c);
    return 0;
}

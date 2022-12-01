#include<stdio.h>

int main()
{
    int a, b, c, d;
    scanf("%d", &a);
    scanf("%d", &c);
    b = a<<c;
    d = a>>c;
    printf("Right shift = %d\n", d);
    printf("Left shift = %d\n", b);
    return 0;

}

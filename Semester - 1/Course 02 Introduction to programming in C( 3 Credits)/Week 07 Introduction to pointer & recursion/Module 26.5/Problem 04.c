#include<stdio.h>

float radius(int r)
{
    return 3.1416*r*r;
}

int main()
{
    int r;
    scanf("%d", &r);
    printf("%f\n", radius(r));
    return 0;
}

#include<stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int* p = &a;
    int* q = &b;
    printf("%0.3f\n", (*p+*q)/2.0);
    return 0;
}

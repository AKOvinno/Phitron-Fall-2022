#include<stdio.h>

int main()
{
    int a = 5;
    printf("%d\n", a);
    int* p = &a;
    printf("%p\n", p);

    int** q = &p;
    printf("%p\n", q);

    **q = 7;

    printf("%d\n", a);
    printf("%d\n", **q);

    return 0;
}

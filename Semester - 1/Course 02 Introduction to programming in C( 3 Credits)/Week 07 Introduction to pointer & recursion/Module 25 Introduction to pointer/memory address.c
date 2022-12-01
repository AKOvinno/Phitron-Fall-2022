#include<stdio.h>

int main()
{
    int a = 786;
    int* p;
    p = &a;
    printf("%d\n", p);
    printf("%p\n", p);
    printf("%d\n", *p);
    return 0;
}

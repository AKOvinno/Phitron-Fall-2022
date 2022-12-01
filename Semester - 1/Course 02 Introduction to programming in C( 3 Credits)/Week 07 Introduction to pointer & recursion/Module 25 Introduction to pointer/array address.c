#include<stdio.h>

int main()
{
    int ara[3] = {5, 6, 7};

    printf("%p\n", ara);

    printf("\n");

    printf("%p\n", &ara[0]);
    printf("%p\n", &ara[1]);
    printf("%p\n", &ara[2]);

    return 0;
}

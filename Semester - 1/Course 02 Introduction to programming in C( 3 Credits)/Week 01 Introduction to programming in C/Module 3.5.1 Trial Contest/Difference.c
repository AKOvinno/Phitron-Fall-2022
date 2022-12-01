#include<stdio.h>

int main()
{
    int a, b, d;
    scanf("%d %d", &a, &b);
    d = a - b;
    if(d < 0) {
        printf("%d\n", d*-1);
    }
    else {
        printf("%d\n", d);
    }
    return 0;
}

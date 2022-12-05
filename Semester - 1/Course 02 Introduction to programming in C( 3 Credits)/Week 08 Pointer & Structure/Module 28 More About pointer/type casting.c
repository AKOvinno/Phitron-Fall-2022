#include<stdio.h>

int main()
{
    int a = 7;
    double b = 9.56;
    char c = 'a';

    b = (double)25/4;
    a = c;
    c = 105;

    printf("%d %lf %c", a, b, c);
    return 0;
}

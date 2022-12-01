#include<stdio.h>
#include<math.h>

int main()
{
    int a, b, c, d, m, q, r;

    a = 7;
    b = 5;
    c = a+b;
    d = a-b;
    m = a*b;
    q = a/b;
    r = a%b;

    printf("Summation = %d\ndifference = %d\nproduct = %d\nquotient = %d\nremainder = %d\n", c, d, m, q, r);
    int p = pow(5, 3);
    printf("5 to the power = %d\n", p);
    float s;
    s = sqrt(49);
    printf("square root = %f\n", s);
    return 0;
}

#include<stdio.h>

int factorial_one(int n)
{
    int fact = 1;
    for(int i = n; i > 0; i--) {
        fact *= i;
    }
    return fact;
}
double ratio(int a, int b)
{
    return factorial_one(a)*1.0/factorial_one(b)*1.0;
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%0.2lf\n", ratio(a, b));
    return 0;
}

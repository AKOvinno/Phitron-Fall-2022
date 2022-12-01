#include<stdio.h>

int main()
{
    int numerator, denominator;
    scanf("%d %d", &numerator, &denominator);
    printf("quotient = %d, remainder = %d\n", numerator/denominator, numerator%denominator);
    return 0;
}

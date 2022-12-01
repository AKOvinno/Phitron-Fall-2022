#include<stdio.h>

int main()
{
    int a = 22;
    int b = 5;
    int c = a & b;
    int d = a | b;
    int e = ~-5;
    printf("AND = %d\n", c);
    printf("OR = %d\n", ~d);
    printf("NOT = %d\n", e);
    return 0;
}

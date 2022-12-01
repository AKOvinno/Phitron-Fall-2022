#include<stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if(a == b && b == c) {
        printf("This is an Equilateral triangle.\n");
    }
    else if(a == b || b == c || a == c) {
        printf("This is an isosceles triangle.\n");
    }
    else {
        printf("This is an Scalene triangle.\n");
    }
    return 0;
}

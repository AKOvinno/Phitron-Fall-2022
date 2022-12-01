#include<stdio.h>

int main()
{
    int x, a, b;
    printf("Please enter three numbers: ");
    scanf("%d %d %d", &x, &a, &b);
    if(x % 2 == 0) {
        printf("%d + %d = %d", a, b, a+b);
    }
    else {
        printf("%d - %d = %d", a, b, a-b);
    }
    return 0;
}

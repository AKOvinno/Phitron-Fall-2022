#include<stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if(c < a && c < b) {
        printf("%d\n", a+b);
    }
    else if(a < c && a < b) {
        printf("%d\n", b+c);
    }
    else if(b < a && b < c) {
        printf("%d\n", a+c);
    }
    else {
        printf("%d\n", a+b);
    }
    return 0;
}

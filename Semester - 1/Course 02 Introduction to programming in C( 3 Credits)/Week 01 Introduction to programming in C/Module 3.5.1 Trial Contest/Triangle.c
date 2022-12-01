#include<stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if(a < 0) {
        a = a*-1;
    }
    if(b < 0) {
        b = b*-1;
    }
    if(c < 0) {
        c = c*-1;
    }
    if(a == b && b == c && a != 0) {
        printf("Yes\n");
    }
    else {
        printf("No\n");
    }
    return 0;
}

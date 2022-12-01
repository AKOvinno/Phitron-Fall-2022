#include<stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("1st Number = %d,\t2nd Number = %d,\t3rd Number = %d\n", a, b, c);
    if(a > b && a > c) {
        printf("The 1st Number is the greatest among three.\n");
    }
    else if(b > a && b > c) {
        printf("The 2nd Number is the greatest among three.\n");
    }
    else {
        printf("The 3rd Number is the greatest among three.\n");
    }
    return 0;
}

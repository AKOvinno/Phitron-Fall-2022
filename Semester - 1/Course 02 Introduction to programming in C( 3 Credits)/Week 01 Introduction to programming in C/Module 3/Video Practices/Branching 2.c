#include<stdio.h>

int main()
{
    int x, y;
    printf("Please Enter two numbers: ");
    scanf("%d %d", &x, &y);

    if(x > y) {
        printf("%d is large.\n", x);
    }
    else {
        printf("%d is large.\n", y);
    }
    return 0;
}

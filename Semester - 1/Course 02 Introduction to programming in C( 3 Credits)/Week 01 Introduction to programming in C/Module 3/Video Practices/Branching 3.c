#include<stdio.h>

int main()
{
    int x, y;
    printf("Please input two numbers: ");
    scanf("%d %d", &x, &y);

    if(x > y) {
        printf("%d is large.\n", x);
    }
    else {
        if(x < y) {
            printf("%d is large.\n", y);
        }
        else {
            printf("They are equal.\n");
        }
    }
    return 0;
}

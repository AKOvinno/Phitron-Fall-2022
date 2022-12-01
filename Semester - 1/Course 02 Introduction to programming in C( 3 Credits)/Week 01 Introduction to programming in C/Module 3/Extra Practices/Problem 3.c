#include<stdio.h>

int main()
{
    int number;
    scanf("%d", &number);
    if(number >= 0) {
        printf("%d is a positive integer.\n", number);
    }
    else {
        printf("%d is an negative integer.\n", number);
    }
    return 0;
}

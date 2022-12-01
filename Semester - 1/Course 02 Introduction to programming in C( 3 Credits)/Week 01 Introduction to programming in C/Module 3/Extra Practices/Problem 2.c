#include<stdio.h>

int main()
{
    int number;
    scanf("%d", &number);
    if(number % 2 == 0) {
        printf("%d is an Even integer.\n", number);
    }
    else {
        printf("%d is an odd integer.\n", number);
    }
    return 0;
}

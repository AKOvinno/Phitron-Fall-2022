#include<stdio.h>

int main()
{
    int i, j;
    for(i = 1; i <= 3; i++) {
        for(j = 1; j <= 5; j+=2) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

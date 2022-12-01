#include<stdio.h>

int pattern(int n)
{
    int i, space, j;
    for(i = n; i >= 1; i--) {
        for(space = 0; space < n-i; space++) {
            printf(" ");
        }
        for(j = 2*i-1; j >= 1; j--) {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    pattern(n);
    return 0;
}

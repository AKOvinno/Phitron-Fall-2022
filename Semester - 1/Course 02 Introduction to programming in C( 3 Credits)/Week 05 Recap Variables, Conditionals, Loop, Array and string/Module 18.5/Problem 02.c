#include<stdio.h>

int main()
{
    int n, i, j;
    scanf("%d", &n);
    for(int k = n; k > 0; k--) {
        for(i = k - 1; i > 0; i--) {
            printf(" ");
        }
        for(i = 0; i < n; i++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

#include<stdio.h>

int main()
{
    int n, i, j, k, space;
    scanf("%d", &n);
    for(i = 1, k = 1, space = n-1; i <= n; i++, k+=2, space--) {
        for(j = space; j > 0; j--) {
            printf(" ");
        }
        for(int l = 1; l <= k; l++) {
            printf("A");
        }
        printf("\n");
    }
    return 0;
}

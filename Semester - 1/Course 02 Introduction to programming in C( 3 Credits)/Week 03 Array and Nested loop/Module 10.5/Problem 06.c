#include<stdio.h>

int main()
{
    int i, j, k, n, space = 0;
    scanf("%d", &n);
    for(i = n; i > 0; i--) {
        space++;
        for(j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
        for(k = space; k; k--) {
            printf(" ");
        }
    }
    return 0;
}

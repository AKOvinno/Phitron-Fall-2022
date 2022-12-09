#include<stdio.h>

int main()
{
    int n, i, j, a = 0, b = 1, sum = 0;
    scanf("%d", &n);
    printf("%d, %d, ", a, b);
    for(i = 2; i < n; i++) {
        sum = a+b;
        if(i == n-1) {
            printf("%d\n", sum);
            break;
        }
        printf("%d, ", sum);
        a = b;
        b = sum;
    }
    return 0;
}

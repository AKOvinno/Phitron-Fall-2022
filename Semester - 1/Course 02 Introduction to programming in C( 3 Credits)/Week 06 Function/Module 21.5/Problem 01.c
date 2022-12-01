#include<stdio.h>

void output(int n)
{
    int i;
    if(n >= 0) {
        for(i = n; i >= n*-1; i--) {
            printf("%d ", i);
        }
    }
    else {
        for(i = n; i <= n*-1; i++) {
            printf("%d ", i);
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    output(n);
    return 0;
}

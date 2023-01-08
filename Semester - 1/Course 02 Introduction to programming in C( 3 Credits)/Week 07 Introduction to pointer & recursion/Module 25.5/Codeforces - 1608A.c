#include<stdio.h>

int main()
{
    int t, i;
    scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);
        if(n == 1) {
            printf("%d\n", n);
        }
        else if(n > 1) {
            for(i = 2; i <= n+1; i++) {
                printf("%d ", i);
            }
            printf("\n");
        }
    }
    return 0;
}

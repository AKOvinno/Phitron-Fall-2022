#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);
        for(int i = 0; i <= n; i++) {
            for(int j = 1; j <= i; j++) {
                printf("%d ", (j==1 || j==i));
            }
            printf("\n");
        }
    }
    return 0;
}

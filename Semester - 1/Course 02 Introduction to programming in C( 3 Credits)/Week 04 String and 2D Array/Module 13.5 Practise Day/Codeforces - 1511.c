#include<stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t) {
        int n, i, up = 0, down = 0;
        scanf("%d", &n);
        int ara[n];
        for(i = 0; i < n; i++) {
            scanf("%d", &ara[i]);
        }
        for(i = 0; i < n; i++) {
            if(ara[i] == 1 || ara[i] == 3) {
                up++;
            }
            else if(ara[i] == 2) {
                down++;
            }
        }
        printf("%d\n", up);
        t--;
    }
    return 0;
}

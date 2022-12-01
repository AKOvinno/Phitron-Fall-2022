#include<stdio.h>

int main()
{
    int t, n, i, j, k;
    scanf("%d", &t);

    while(t) {
        scanf("%d", &n);
        int ara[n];
        if(n % 2 == 0) {
            for(i = (n/2), j = n, k = 0; i >= 1, j > (n/2), k < n; i--, j--, k+=2) {
                ara[k] = i;
                ara[k+1] = j;
            }
        }
        else {
            for(i = (n/2)+1, j = n, k = 0; i > 1, j > (n/2)+1, k < n; i--, j--, k+=2) {
                 ara[k] = i;
                ara[k+1] = j;
            }
            ara[n-1] = 1;
        }
        for(i = 0; i < n; i++) {
            printf("%d ", ara[i]);
        }
        printf("\n");
        t--;
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int t, i, j, temp;
    scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);
        int ara[n];
        for(i = 0, j = n; i < n; i++) {
            ara[i] = j;
            j--;
        }
        if(n > 2) {
            int temp = ara[n/2];
            ara[n/2] = ara[n-1];
            ara[n-1] = temp;
        }
        for(i = 0; i < n; i++) {
            printf("%d ", ara[i]);
        }
        printf("\n");
    }
    return 0;
}

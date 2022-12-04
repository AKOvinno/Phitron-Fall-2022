#include<stdio.h>

int main()
{
    int i, j, n, found;
    scanf("%d", &n);
    int ara[n];
    for(i = 0; i < n; i++) {
        scanf("%d", &ara[i]);
    }
    printf("\n");
    for(i = 0; i < n; i++) {
        int select = ara[i];
        for(j = i+1; j < n; j++) {
            if(ara[j] == select) {
                ara[j] = 0;
            }
        }
    }
    for(i = 0; i < n; i++) {
        if(ara[i] > 0) {
            printf("%d ", ara[i]);
        }
    }
    return 0;
}

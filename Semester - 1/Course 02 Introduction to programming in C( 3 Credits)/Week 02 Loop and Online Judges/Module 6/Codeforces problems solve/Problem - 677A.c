#include<stdio.h>

int main()
{
    int n, h, i, width = 0;
    scanf("%d %d", &n, &h);
    int ara[n];
    for(i = 0; i < n; i++) {
        scanf("%d", &ara[i]);
    }
    for(i = 0; i < n; i++) {
        if(ara[i] > h) {
            width+=2;
        }
        else {
            width++;
        }
    }
    printf("%d\n", width);
}

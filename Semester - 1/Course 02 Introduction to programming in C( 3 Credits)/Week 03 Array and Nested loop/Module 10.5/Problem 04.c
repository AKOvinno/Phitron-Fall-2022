#include<stdio.h>

int main()
{
    int n, i, j, temp, k;
    scanf("%d", &n);
    int ara[n];
    for(i = 0; i < n; i++) {
        scanf("%d", &ara[i]);
    }
    scanf("%d", &k);
    for(i = 0; i < n; i++) {
        for(j = i+1; j < n; j++) {
            if(ara[i] > ara[j]) {
                temp = ara[i];
                ara[i] = ara[j];
                ara[j] = temp;
            }
        }
    }
    printf("%d\n", ara[k-1]);
    return 0;
}


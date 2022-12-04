#include<stdio.h>

int main()
{
    int n, i, j, k, count = 0;
    scanf("%d %d", &n, &k);
    int ara[n];
    for(i = 0; i < n; i++) {
        scanf("%d", &ara[i]);
    }
    int largest = ara[0];
    for(i = 1; i < n; i++) {
        if(ara[i] > largest) {
            largest = ara[i];
        }
    }
    int ara_sorted[largest+1];
    for(i = 0; i <= largest; i++) {
        ara_sorted[i] = 0;
    }
    for(i = 0; i < n; i++) {
        ara_sorted[ara[i]]++;
    }
    for(i = 0; i <= largest; i++) {
        if(ara_sorted[i] == 1) {
            printf("%d ", i);
        }
        else if(ara_sorted[i] > 1) {
            for(j = 1; j <= ara_sorted[i]; j++) {
                printf("%d ", i);
            }
        }
    }
    printf("\n");
    for(i = 0; i <= largest; i++) {
        if(ara_sorted[i] > 0) {
            count++;
            if(count == k) {
                printf("%dth largest element = %d\n", k, i);
                break;
            }
        }
    }
    return 0;
}

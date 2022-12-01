#include<stdio.h>

int main()
{
    int n, m, i, j, sum = 0;
    scanf("%d %d", &n, &m);
    int ara[n], ara2[m];

    for(i = 0; i < n; i++) {
        scanf("%d", &ara[i]);
    }
    for(i = 0; i < m; i++) {
        scanf("%d", &ara2[i]);
    }
    for(i = 0; i < m; i++) {
        sum = 0;
        for(j = 0; j < n; j++) {
            if(ara2[i] > ara[j]) {
                sum++;
            }
            else {
                break;
            }
        }
        printf("%d ", sum);
    }
    return 0;
}

#include<stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t--) {
        int n, i, j, max_pro, min_pro, max_sum, min_sum;
        scanf("%d", &n);
        int ara[n];
        for(i = 0; i < n; i++) {
            scanf("%d", &ara[i]);
        }
        max_pro = ara[0]*ara[0];
        for(i = 1; i < n; i++) {
            if(max_pro < ara[i]*ara[i]) {
                max_pro = ara[i]*ara[i];
            }
        }
        max_sum = ara[0]+ara[0];
        for(i = 1; i < n; i++) {
            if(max_sum < ara[i]+ara[i]) {
                max_sum = ara[i]+ara[i];
            }
        }
        min_pro = ara[0]*ara[0];
        for(i = 0; i < n; i++) {
            for(j = 1; j < n; j++) {
                if(min_pro > ara[i]*ara[j]) {
                    min_pro = ara[i]*ara[j];
                }
            }
        }
        min_sum = ara[0]+ara[0];
        for(i = 0; i < n; i++) {
            for(j = 1; j < n; j++) {
                if(min_sum > ara[i]+ara[j]) {
                    min_sum = ara[i]+ara[j];
                }
            }
        }
        printf("%d %d %d %d\n", max_pro, min_pro, max_sum, min_sum);
    }
    return 0;
}

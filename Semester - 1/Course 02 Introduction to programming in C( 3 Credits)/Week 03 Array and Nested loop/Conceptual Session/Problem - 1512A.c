#include<stdio.h>

int main()
{
    int t, n, index, i, zero = 0, minus = 0;
    scanf("%d", &t);
    while(t) {
        scanf("%d", &n);
        int ara[n];
        for(i = 0; i < n; i++) {
            scanf("%d", &ara[i]);
        }
        int first = ara[0];
        for(i = 0; i <n; i++) {
            if(ara[i] == first) {
                ara[i] = -1;
            }
            else {
                ara[i] = 0;
            }
        }
        for(i = 0; i < n; i++) {
            if(ara[i] == -1) {
                minus++;
            }
            else if(ara[i] == 0){
                zero++;
            }
        }
        if(zero > minus) {
            for(i = 0; i < n; i++) {
                if(ara[i] < 0) {
                    index = i;
                }
            }
        }
        else {
            for(i = 0; i < n; i++) {
                if(ara[i] == 0) {
                    index = i;
                }
            }
        }
        printf("%d\n", index+1);
        zero = 0;
        minus = 0;
        t--;
    }
    return 0;
}

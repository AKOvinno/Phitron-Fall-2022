#include<stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t) {
        int n, i, same, flag_same = 0, largest_index, largest;
        scanf("%d", &n);
        int ara[n];
        for(i = 0; i < n; i++) {
            scanf("%d", &ara[i]);
        }
        for(i = 0; i < n; i++) {
            same = ara[0];
            if(ara[i] != same) {
                flag_same = 1;
            }
        }
        if(!flag_same) {
            printf("-1\n");
        }
        else {
            largest = ara[0];
            for(i = 0; i < n; i++) {
                if(ara[i] >= largest) {
                    largest = ara[i];
                    largest_index = i;
                }
            }
            printf("%d\n", largest_index+1);
        }
        t--;
    }
    return 0;
}

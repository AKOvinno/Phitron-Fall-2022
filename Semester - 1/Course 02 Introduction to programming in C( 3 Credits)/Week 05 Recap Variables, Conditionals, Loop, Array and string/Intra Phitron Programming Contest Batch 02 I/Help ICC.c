#include<stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t) {
        int ara[6];
        int i, flag = 0;
        for(i = 0; i < 6; i++) {
            scanf("%d", &ara[i]);
        }
        for(i = 0; i < 6; i++) {
            if(ara[i] > 0) {
                printf("NO\n");
                flag = 1;
                break;
            }
        }
        if(!flag) {
            printf("YES\n");
        }
        t--;
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int t, i;
    scanf("%d", &t);
    while(t--) {
        int key, flag = 0, second = 0;
        scanf("%d", &key);
        int ara[3];
        for(i = 0; i < 3; i++) {
            scanf("%d", &ara[i]);
        }
        for(i = 0; i < 3; i++) {
            if(ara[key-1] == 0) {
                flag = 1;
                break;
            }
            else if(ara[key-1] != 0) {
                second = ara[key-1];
                if(ara[second-1] == 0) {
                    flag = 1;
                    break;
                }
                else {
                    printf("YES\n");
                    break;
                }
            }
        }
        if(flag)
            printf("NO\n");
    }
    return 0;
}

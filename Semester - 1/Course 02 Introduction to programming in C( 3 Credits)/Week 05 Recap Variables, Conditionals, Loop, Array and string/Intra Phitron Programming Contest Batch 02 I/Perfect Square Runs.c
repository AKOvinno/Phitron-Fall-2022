#include<stdio.h>
#include<math.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t) {
        int N, i, count = 0, sqt, flag = 0;
        scanf("%d", &N);
        int ara[N];
        for(i = 0; i < N; i++) {
            scanf("%d", &ara[i]);
            sqt = sqrt(ara[i]);
            if((sqt*sqt) == ara[i]) {
                flag = 1;
                count++;
            }
        }
        if(flag == 1) {
            printf("%d\n", count);
        }
        else {
            printf("-1\n");
        }
        t--;
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int t, i, j;
    scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);
        int ara[n];
        for(i = 0; i < n; i++) {
            scanf("%d", &ara[i]);
        }
        for(j = 0; j < n; j++) {
            int b;
            scanf("%d", &b);
            char move[b];
            scanf("%s", move);
            for(i = 0; move[i] != '\0'; i++) {
                if(move[i] == 'U') {
                    ara[j]--;
                    if(ara[j] < 0) ara[j] = 9;
                }
                else if(move[i] == 'D') {
                    ara[j]++;
                    if(ara[j] > 9) ara[j] = 0;
                }
            }
        }
        for(i = 0; i < n; i++) {
            printf("%d ", ara[i]);
        }
        printf("\n");
    }
    return 0;
}

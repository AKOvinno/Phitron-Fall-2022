#include<stdio.h>

int main()
{
    int t, i, j, num;
    int ara[6];
    scanf("%d", &t);
    while(t) {
        int first = 0, last = 0;
        scanf("%d", &num);
        for(i = 0, j = 100000; i < 6; i++, j/=10) {
            ara[i] = num/j;
            num = num - ara[i]*j;
        }
        for(i = 0; i < 3; i++) {
            first += ara[i];
        }
        for(i = 5; i > 2; i--) {
            last += ara[i];
        }
        if(first == last) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
        t--;
    }
    return 0;
}

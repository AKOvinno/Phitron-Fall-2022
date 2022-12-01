#include<stdio.h>

int main()
{
    int t, w, h, n;
    scanf("%d", &t);
    while(t) {
        scanf("%d %d %d", &w, &h, &n);
        int count = 1;
        while(w % 2 == 0) {
            w/=2;
            count *= 2;
        }
        //because it will increase exponentially
        while(h % 2 == 0) {
            h/=2;
            count *= 2;
        }
            if(count >= n) {
                printf("YES\n");
            }
            else {
                printf("NO\n");
            }
            t--;
        }
    return 0;
}

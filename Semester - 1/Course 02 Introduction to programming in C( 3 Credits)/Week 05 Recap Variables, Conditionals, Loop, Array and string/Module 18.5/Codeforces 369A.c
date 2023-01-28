#include<stdio.h>
int main()
{
    int n, m, k, ans = 0;
    scanf("%d %d %d", &n, &m, &k);
    while(n--) {
        int day;
        scanf("%d", &day);
        if(day == 1) {
            if(m == 0)
                ans++;
            else
                m--;
        }
        else {
            if(k != 0) {
                k--;
                continue;
            }
            else if(m != 0) {
                m--;
                continue;
            }
            ans++;
        }
    }
    printf("%d\n", ans);
    return 0;
}

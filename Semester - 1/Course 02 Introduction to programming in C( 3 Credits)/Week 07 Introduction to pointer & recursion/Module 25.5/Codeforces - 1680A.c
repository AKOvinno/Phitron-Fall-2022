#include<stdio.h>

int min(int a, int b)
{
    if(a < b)
        return a;
    else
        return b;
}
int max(int a, int b)
{
    if(a > b)
        return a;
    else
        return b;
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--) {
        int l1, r1, l2, r2;
        scanf("%d %d %d %d", &l1, &r1, &l2, &r2);
        if(max(l1, l2) <= min(r1, r2)) {
            printf("%d\n", max(l1, l2));
        }
        else {
            printf("%d\n", l1+l2);
        }
    }
    return 0;
}

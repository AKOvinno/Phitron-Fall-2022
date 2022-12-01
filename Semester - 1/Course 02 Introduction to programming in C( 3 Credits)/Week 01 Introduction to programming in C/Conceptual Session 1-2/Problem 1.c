#include<stdio.h>
int main()
{
    int a, b, c, d, f1, f2;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if(a > b) {
        f1 = a;
    }
    else {
        f1 = b;
    }
    if(c > d) {
        f2 = c;
    }
    else {
        f2 = d;
    }
    if((f1 < c && f1 < d) || (f2 < a && f2 < b)) {
        printf("NO\n");
    }
    else {
        printf("YES\n");
    }
    return 0;
}

#include<stdio.h>

int gcd(int m, int n)
{
    int l, s, i;
    if(m>n) {
        l = m;
        s = n;
    }
    else {
        l = n;
        s = m;
    }
    for(i = s; i >= 1; i--) {
        if(l%i == 0 && s%i == 0)
            return i;
    }
}

int lcm(int m, int n)
{
    int i;
    for(i = m; ; i++){
        if(i%m == 0 && i%n == 0)
            return i;
    }
}
int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    printf("GCD is %d\n", gcd(m, n));
    printf("LCM is %d\n", lcm(m, n));
    return 0;
}

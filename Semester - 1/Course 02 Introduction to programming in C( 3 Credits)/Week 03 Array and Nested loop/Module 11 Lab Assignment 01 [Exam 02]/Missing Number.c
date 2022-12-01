#include<stdio.h>

int main()
{
    long long int T, i, S, a, b, c;
    scanf("%lld", &T);
    for(i = T; i > 0; i--) {
        scanf("%lld %lld %lld %lld", &S, &a, &b, &c);
        printf("%lld\n", S-(a+b+c));
    }
    return 0;
}

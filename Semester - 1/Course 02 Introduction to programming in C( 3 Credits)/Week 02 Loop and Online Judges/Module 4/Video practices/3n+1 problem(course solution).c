#include<stdio.h>

int main()
{
    long long int n;
    scanf("%lld", &n);
    while(n > 1) {
        printf("%lld ", n);
        if(n%2==0) {
            n = n/2;
        }
        else {
            n = 3*n + 1;
        }
    }
    printf("%lld", n);
    return 0;
}

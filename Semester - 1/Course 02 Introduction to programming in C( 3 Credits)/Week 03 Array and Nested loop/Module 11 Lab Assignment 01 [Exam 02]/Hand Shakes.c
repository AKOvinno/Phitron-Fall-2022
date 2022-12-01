#include<stdio.h>

int main()
{
     int i, j;
     long long int N, count = 0;
    scanf("%lld", &N);
    for(i = 1; i <= N; i++) {
        for(j = i+1; j <= N; j++) {
            count++;
        }
    }
    printf("%lld\n", count);
    return 0;
}

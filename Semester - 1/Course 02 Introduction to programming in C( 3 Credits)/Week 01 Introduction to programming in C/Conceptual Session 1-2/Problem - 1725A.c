#include<stdio.h>

int main()
{
    long long int N, M, num;
    scanf("%lld %lld", &N, &M);
    if(M > 1) {
        num = (M-1)*N;
    }
    else if(M == 1){
        num = (N-1)*M;
    }
    printf("%lld\n", num);
    return 0;
}

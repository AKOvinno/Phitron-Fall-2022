#include<stdio.h>

int main()
{
    long long int num, i, count = 0;
    scanf("%lld", &num);

    for(i = 10; ; i*=10) {
        num/=10;
        count++;
        if(num == 0) {
            break;
        }
    }
    printf("%lld digits\n", count);
    return 0;
}

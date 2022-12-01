#include<stdio.h>

int main()
{
    long long int i, num, sum = 0;
    scanf("%lld", &num);

    for(i = 1; ; i++) {
        sum+= (num%10);
        num/=10;
        if(num == 0) {
            break;
        }
    }
    if(sum < 0) {
        sum*=-1;
    }
    printf("%lld\n", sum);
    return 0;
}

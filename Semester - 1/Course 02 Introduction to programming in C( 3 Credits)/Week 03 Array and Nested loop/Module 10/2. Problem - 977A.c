#include<stdio.h>

int main()
{
    int num, i, k;
    scanf("%d %d", &num, &k);
    for(i = k; i > 0; i--) {
        if(num % 10 != 0) {
            num-=1;
        }
        else {
            num/=10;
        }
    }
    printf("%d\n", num);
    return 0;
}

#include<stdio.h>

int main()
{
    int num, i;
    scanf("%d", &num);

    for(i = 1; num > 1; i++) {
        printf("%d, ", num);
        if(num % 2 == 0) {
            num/=2;
        }
        else {
            num-=1;
        }
    }
    printf("%d", 1);
    return 0;
}

#include<stdio.h>

int main()
{
    int ara[5];
    int i;

    for(i = 0; i < 5; i++) {
        scanf("%d", &ara[i]);
    }

    for(i = 0; i < 5; i++) {
        printf("%d-th position value = %d\n", i, ara[i]);
    }

    return 0;
}

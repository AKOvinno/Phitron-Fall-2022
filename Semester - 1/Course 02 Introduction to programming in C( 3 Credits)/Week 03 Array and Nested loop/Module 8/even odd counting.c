#include<stdio.h>

int main()
{
    int N;
    int ara[100];
    int i;

    scanf("%d", &N);

    for(i = 0; i < N; i++) {
        scanf("%d", &ara[i]);
    }

    int e_c = 0, o_c = 0;

    for(i = 0; i < N; i++) {
        if(ara[i] % 2 == 0) {
            e_c++;
        }
        else {
            o_c++;
        }
    }
    printf("No. of evens = %d\n", e_c);
    printf("No. of odds = %d\n", o_c);

    return 0;
}

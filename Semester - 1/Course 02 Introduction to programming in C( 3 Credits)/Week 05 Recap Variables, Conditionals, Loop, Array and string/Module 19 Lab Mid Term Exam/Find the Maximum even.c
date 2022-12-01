#include<stdio.h>

int main()
{
    int n, i, j, temp, sum_even = 0, sum_odd = 0, count_even = 0, count_odd = 0;
    scanf("%d", &n);
    int ara[n];
    for(i = 0; i < n; i++) {
        scanf("%d", &ara[i]);
    }

    for(i = 0; i < n; i++) {
        for(j = i+1; j < n; j++) {
            if(ara[i] < ara[j]) {
                temp = ara[i];
                ara[i] = ara[j];
                ara[j] = temp;
            }
        }
    }

    for(i = 0; i < n; i++) {
        if(ara[i] % 2 == 0 && count_even != 2) {
            sum_even += ara[i];
            count_even++;
        }
        else if(ara[i] % 2 != 0 && count_odd != 2) {
            sum_odd += ara[i];
            count_odd++;
        }
    }
    if(sum_even > sum_odd ) {
        printf("%d\n", sum_even);
    }
    else if(sum_odd > sum_even && sum_odd % 2 == 0) {
        printf("%d\n", sum_odd);
    }
    else {
        printf("%d\n", sum_even);
    }
    return 0;
}

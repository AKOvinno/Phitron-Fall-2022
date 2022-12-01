#include<stdio.h>

int array_input(int n)
{
    int i, count = 0;
    int ara[n];
    for(i = 0; i < n; i++) {
        scanf("%d", &ara[i]);
    }
    int k;
    scanf("%d", &k);
    for(i = 0; i < n; i++) {
        if(ara[i] > k || ara[i] < k) {
            count++;
        }
    }
    return count;
}

int main()
{
    int n;
    scanf("%d", &n);

    printf("%d\n", array_input(n));

    return 0;
}

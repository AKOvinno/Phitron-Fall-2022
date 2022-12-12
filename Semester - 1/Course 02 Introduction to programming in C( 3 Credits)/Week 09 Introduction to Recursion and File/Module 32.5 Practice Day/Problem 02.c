#include<stdio.h>
int last_digit(int n)
{
    return n%10;
}
int total_summ(int ara[], int i, int n)
{
    if(i == n) return 0;
    int s = total_summ(ara, i+1, n);
    return s + last_digit(ara[i]);
}
int main()
{
    int n;
    scanf("%d", &n);
    int ara[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &ara[i]);
    }
    printf("%d\n", total_summ(ara, 0, n));
    return 0;
}

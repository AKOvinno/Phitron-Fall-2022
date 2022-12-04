#include<stdio.h>

void find_consecutive_even(int n)
{
    int avg = n/4;
    printf("%d %d %d %d\n", avg-3, avg-1, avg+1, avg+3);
}

int main()
{
    int t;
    scanf("%d", &t);
    for(int i = 1; i <= t; i++) {
        int n;
        scanf("%d", &n);
        find_consecutive_even(n);
    }
    return 0;
}

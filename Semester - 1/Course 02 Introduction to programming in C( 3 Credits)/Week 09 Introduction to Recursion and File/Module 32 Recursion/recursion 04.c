#include<stdio.h>
int solve(int i, int n)
{
    if(i > n) return 0;
    int s = solve(i+1, n);
    return s+i;
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", solve(1, n));
    return 0;
}

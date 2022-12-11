#include<stdio.h>
void solve(int i, int n)
{
    //base case
    if(i > n) return;
    printf("%d ", i);
    solve(i+1, n);
}
int main()
{
    int n;
    scanf("%d", &n);
    solve(1, n);
    return 0;
}

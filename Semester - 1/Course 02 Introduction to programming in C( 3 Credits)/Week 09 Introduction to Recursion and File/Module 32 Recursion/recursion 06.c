#include<stdio.h>
int solve(int ar[], int n)
{
    if(n == 0) return 0;
    int s = solve(ar+1, n-1);
    return s + *ar;
}
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &ar[i]);
    }
    printf("%d\n", solve(ar, n));
    return 0;
}


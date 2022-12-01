#include<stdio.h>
#include<math.h>

int fact(int x);

int main()
{
    int n, r;
    scanf("%d %d", &n, &r);
    int perm = fact(n) / fact (n-r);
    int comb = fact(n) / (fact(n-r)*fact(r));
    printf("nPr = %d\n", perm);
    printf("nCr = %d\n", comb);
    return 0;
}

int fact(int x)
{
    int res = 1, i;
    for(i = 1; i <= x; i++) {
        res *=i;
    }
    return res;
}

#include<stdio.h>

int gcd(int x, int y)
{
    for(int i = x; i >= 1; i--) {
        if(x%i == 0 && y%i == 0) {
            return i;
        }
    }
}

int main()
{
    int a, b, ans;
    scanf("%d %d", &a, &b);

    printf("The GCD is %d\n", gcd(a, b));
    return 0;
}

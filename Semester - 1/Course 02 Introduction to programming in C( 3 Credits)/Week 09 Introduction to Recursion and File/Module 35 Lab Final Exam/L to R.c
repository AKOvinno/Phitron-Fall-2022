#include<stdio.h>
#include<math.h>

int is_prime(int n)
{
    if(n == 2 || n == 3 || n == 1) {
        return 1;
    }
    else {
        for(int i = 2; i <= sqrt(n); i++) {
            if(n % i == 0)
                return 0;
        }
    }
    return 1;
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--) {
        int l, r;
        scanf("%d %d", &l, &r);
        for(int i = l; i <= r; i++) {
            if(is_prime(i))
                printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}

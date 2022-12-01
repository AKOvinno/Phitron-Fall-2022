#include<stdio.h>
#include<math.h>

int is_prime(int n)
{
    int i;
    if(n == 2)
        return 1;
    if(n % 2 == 0)
        return 0;
    else if(n > 2) {
        for(i = 3; i <= sqrt(n); i+=2) {
            if(n % i == 0)
                return 0;
        }
    }
    return 1;
}

void pyramid_prime(int n)
{
    int i, j, k = 1;
    for(i = 0; i < n; i++) {
        for(j = 0; j <= i; j++) {
            A:
                if(is_prime(++k)){
                    printf("%d ", k);
                }
                else
                    goto A;
        }
        printf("\n");
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    pyramid_prime(n);
}

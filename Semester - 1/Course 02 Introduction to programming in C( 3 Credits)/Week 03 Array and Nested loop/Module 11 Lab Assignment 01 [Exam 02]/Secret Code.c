#include<stdio.h>

int main()
{
    int T, N, i, j, is_prime = 1;
    scanf("%d", &T);
    for(i = T; i > 0; i--) {
        scanf("%d", &N);
        if(N == 1 || N == 0) {
            is_prime = 0;
        }
        else if(N >= 2) {
            for(j = 2; j <= (N/2); j++) {
                if(N % j == 0) {
                    is_prime = 0;
                }
            }
        }
        if(is_prime == 1) {
            printf("Yes\n");
        }
        else {
            printf("No\n");
            is_prime = 1;
        }

    }
    return 0;
}

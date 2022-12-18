#include<stdio.h>

int main()
{
    int t, i;
    scanf("%d", &t);
    while(t--) {
        int num, alphabet;
        scanf("%d", &num);
        for(i = 0; num != 0; i++) {
            alphabet = num % 10 + 64;
            printf("%c", alphabet);
            num /= 10;
        }
        printf("\n");
    }
    return 0;
}

#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    getchar();
    char ch = getchar();
    for(int i = 1; i <= n; i++) {
        for(int j = n-i; j > 0; j--) {
            printf(" ");
        }
        for(int j = 1; j <= n; j++) {
            printf("%c", ch);
        }
        printf("\n");
    }
    return 0;
}

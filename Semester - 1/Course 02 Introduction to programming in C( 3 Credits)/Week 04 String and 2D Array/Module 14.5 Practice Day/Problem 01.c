#include<stdio.h>

int main()
{
    int n, i, j;
    scanf("%d", &n);
    char word[n][1000];
    for(i = 0; i < n; i++) {
        scanf("%s", word[i]);
    }
    for(i = 0; i < n; i++) {
        printf("%s ", word[i]);
    }
    return 0;
}

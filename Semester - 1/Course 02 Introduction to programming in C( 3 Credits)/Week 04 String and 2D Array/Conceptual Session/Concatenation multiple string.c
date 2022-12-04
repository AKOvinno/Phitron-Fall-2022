#include<stdio.h>
#include<string.h>

int main()
{
    int n, i, j, k, len = 0;
    scanf("%d", &n);
    int ara[n];
    char str[n][1000];
    for(i = 0; i < n; i++) {
        scanf("%s", str[i]);
    }
    for(i = 0; i < n; i++) {
        ara[i] = strlen(str[i]);
        len += ara[i];
    }
    char final_str[len+(n-1)];
    i = 0;
    for(j = 0; j < n; j++) {
        for(k = 0; str[j][k] != '\0'; k++) {
            if(k == 0 && str[j][k] >= 'a' && str[j][k] <= 'z') {
                str[j][k] -= 32;
            }
            final_str[i] = str[j][k];
            i++;
        }
        final_str[i] = ' ';
        i++;
    }
    final_str[i] = '\0';
    printf("%s\n", final_str);
}

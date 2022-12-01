#include<stdio.h>

void print_string(char s[])
{
    printf("%s ", s);
}

int main()
{
    int n, i;
    scanf("%d", &n);
    char s[4][1000];
    for(i = 0; i < n; i++) {
        scanf("%s", s[i]);
    }
    for(i = 0; i < n; i++) {
        print_string(s[i]);
    }
    return 0;
}

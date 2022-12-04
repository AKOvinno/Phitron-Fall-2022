#include<stdio.h>
#include<string.h>

int main()
{
    char s[1000];
    scanf("%s", s);
    int i = 0, len = strlen(s), j;
    for(i = len - 1; i >= 0; i--) {
        printf("%c ", s[i]);
    }
    return 0;
}

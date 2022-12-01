#include<stdio.h>

int is_binary(char s[])
{
    for(int i = 0; s[i] != '\0'; i++) {
        if(s[i] != '1' && s[i] != '0') {
            return 0;
        }
    }
    return 1;
}

int main()
{
    char s[1000];
    gets(s);
    if(is_binary(s))
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}

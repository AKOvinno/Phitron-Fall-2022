#include<stdio.h>

int main()
{
    char s[1000];
    scanf("%s", s);
    int i;
    for(i = 0; s[i] != '\0'; i++) {
        if(s[i] == s[i+1])
            continue;
        else
            printf("%c", s[i]);
    }
    return 0;
}

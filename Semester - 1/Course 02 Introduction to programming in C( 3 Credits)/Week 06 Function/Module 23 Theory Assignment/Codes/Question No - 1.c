#include<stdio.h>

int main()
{
    char s[1000];
    gets(s);
    for(int i = 0; s[i] != '\0'; i++) {
        if(s[i] >= 'a' && s[i] <= 'z') {
            s[i] -=32;
        }
        else {
            s[i] += 32;
        }
    }
    printf("%s\n", s);
    return 0;
}

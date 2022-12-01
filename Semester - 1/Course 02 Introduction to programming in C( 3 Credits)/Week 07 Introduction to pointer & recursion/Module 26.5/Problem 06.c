#include<stdio.h>

int is_char_even(char ch)
{
    if(ch % 2 == 0)
        return ch-32;
    else
        return ch;
}
int main()
{
    char s[1000];
    scanf("%s", s);
    int i;
    for(i = 0; s[i] != '\0'; i++) {
        printf("%c", is_char_even(s[i]));
    }
    return 0;
}

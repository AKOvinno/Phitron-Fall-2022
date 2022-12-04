#include<stdio.h>

void print_again(char ch)
{
    int i;
    for(i = 0; i < 2; i++) {
        printf("%c", ch);
    }
}

int main()
{
    char s[1000];
    scanf("%s", s);
    int i;
    for(i = 0; s[i] != '\0'; i++) {
        if(i % 2 == 1)
            print_again(s[i]);
        else
            printf("%c", s[i]);
    }
    return 0;
}

#include<stdio.h>

int calculation(char ch, int a, int b)
{
    if(ch == '*')
        return a*b;
    else if(ch == '/')
        return a/b;
    else if(ch == '+')
        return a+b;
    else if(ch == '-')
        return a-b;
}

int main()
{
    char ch;
    scanf("%c", &ch);
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", calculation(ch, a, b));
    return 0;
}

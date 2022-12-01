#include<stdio.h>

int main()
{
    char ch;
    scanf("%c", &ch);
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    if(ch == '*')
        printf("%d\n", num1*num2);
    else if(ch == '-')
        printf("%d\n", num1-num2);
    else if(ch == '+')
        printf("%d\n", num1+num2);
    else if(ch == '/')
        printf("%d\n", num1/num2);
    return 0;
}

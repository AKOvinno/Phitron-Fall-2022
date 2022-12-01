#include<stdio.h>
int find_num(char ch, char s[])
{
    for(int i = 0; s[i] != '\0'; i++) {
        if(s[i] == ch)
            return 1;
    }
    return 0;
}
int main()
{
    char s[1000];
    gets(s);
    char one = '1', seven = '7', nine = '9';
    if(find_num(one, s) && find_num(seven, s) && find_num(nine, s))
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}

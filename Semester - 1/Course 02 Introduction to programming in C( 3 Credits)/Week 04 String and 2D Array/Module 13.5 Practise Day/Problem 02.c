#include<stdio.h>
#include<string.h>
int main()
{
    char s[100], s2[100];
    gets(s);
    int i, j;
    int length = strlen(s);
    for(i = 0, j = length-1; s[i] != '\0'; i++, j--) {
        s2[i] = s[j];
    }
    s2[i] = '\0';
    if(0 == strcmp(s2, s)) {
        printf("%s is a palindrome.\n", s);
    }
    else {
        printf("%s is not a palindrome.\n", s);
    }
    return 0;
}

#include<stdio.h>
#include<string.h>

int main()
{
    char s[] = "International Cricket Council";
    char s2[30];
    int i, j;
    int len = strlen(s);
    for(i = 0, j = len-1; s[i] != '\0'; i++, j--) {
        s2[i] = s[j];
    }
    s2[i] = '\0';
    printf("%s\n", s2);
    return 0;
}

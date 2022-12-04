#include<stdio.h>
#include<string.h>

int main()
{
    char s1[100], s2[100];
    scanf("%s", s1);
    scanf("%s", s2);
    int ccstr[1000];
    int i, j, len1 = strlen(s1);
    for(i = len1, j = 0; s2[j] != '\0'; i++, j++) {
        s1[i] = s2[j];
    }
    s1[i] = '\0';
    printf("%s\n", s1);
    return 0;
}

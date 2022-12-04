#include<stdio.h>

int main()
{
    char s[100];
    scanf("%s", s);
    int i, j;
    for(i = 0; s[i] != '\0'; i++) {
        for(j = 1; s[j] != '\0'; j++) {
            if(s[j] < s[j-1]) {
                char temp = s[j];
                s[j] = s[j-1];
                s[j-1] = temp;
            }
        }
    }
    printf("%s\n", s);
    return 0;
}

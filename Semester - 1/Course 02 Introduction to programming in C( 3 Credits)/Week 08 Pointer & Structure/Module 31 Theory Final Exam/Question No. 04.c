#include<stdio.h>
void sort_string(char s[])
{
    int i, j;
    int ara[27];
    for(i = 0; i < 27; i++) {
        ara[i] = 0;
    }
    for(i = 0; s[i] != '\0'; i++) {
        ara[s[i] - 96]++;
    }
    for(i = 1; i < 27; i++) {
        if(ara[i] > 0) {
            for(j = 0; j < ara[i]; j++) {
                printf("%c", i+96);
            }
        }
    }
}
int main()
{
    char s[1000];
    scanf("%s", s);
    sort_string(s);
    return 0;
}

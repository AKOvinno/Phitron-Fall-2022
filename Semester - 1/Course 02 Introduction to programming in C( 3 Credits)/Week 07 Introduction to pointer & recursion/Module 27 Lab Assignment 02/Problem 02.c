#include<stdio.h>
#include<string.h>

void sort_string(char s[])
{
    int len = strlen(s);
    int ara[len];
    int i, j, temp;
    for(i = 0; s[i] != '\0'; i++) {
        ara[i] = s[i];
    }
    for(i = 0; i < len; i++) {
        for(j = 0; j < len-1; j++) {
            if(ara[j] < ara[j+1]) {
                temp = ara[j];
                ara[j] = ara[j+1];
                ara[j+1] = temp;
            }
        }
    }
    for(i = 0; i < len; i++) {
        printf("%c", ara[i]);
    }
}

int main()
{
    char s[1000];
    scanf("%s", s);
    sort_string(s);
    return 0;
}

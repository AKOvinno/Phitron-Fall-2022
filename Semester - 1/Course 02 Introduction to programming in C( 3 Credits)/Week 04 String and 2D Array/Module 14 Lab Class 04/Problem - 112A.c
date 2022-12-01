#include<stdio.h>
#include<string.h>

int main()
{
    char s[100], s2[100];
    int i, j, flag = 0;

    gets(s);
    gets(s2);
    int length = strlen(s);
    for(i = 0; s[i] != '\0'; i++) {
        if(s[i] >= 'A' && s[i] <= 'Z') {
            s[i] += 32;
        }
    }
    for(i = 0; s2[i] != '\0'; i++) {
        if(s2[i] >= 'A' && s2[i] <= 'Z') {
            s2[i] += 32;
        }
    }
    for(i = 0; i < length; i++) {
        if(s[i] > s2[i]) {
            printf("1\n");
            flag = 1;
            break;
        }
        else if(s[i] < s2[i]) {
            printf("-1\n");
            flag = -1;
            break;
        }
    }
    if( !flag ) {
        printf("0\n");
    }
    return 0;
}

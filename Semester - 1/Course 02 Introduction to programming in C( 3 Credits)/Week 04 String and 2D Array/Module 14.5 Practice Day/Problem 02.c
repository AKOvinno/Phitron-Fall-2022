#include<stdio.h>

int main()
{
    char s[1000];
    gets(s);
    int i;
    for(i = 0; s[i] != '\0'; i++){
        if(s[i] != '0' && s[i] != '1'){
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
    return 0;
}

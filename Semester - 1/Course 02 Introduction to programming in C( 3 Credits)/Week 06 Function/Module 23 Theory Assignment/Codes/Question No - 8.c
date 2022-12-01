#include<stdio.h>

int main()
{
    char s[1000];
    int num, char_num;
    gets(s);
    scanf("%d", &num);
    for(int i = 0; s[i] != '\0'; i++) {
        char_num = s[i];
        for(int j = 1; j <= num; j++) {
            char_num++;
            if(char_num > 122) {
                char_num = 97;
            }
        }
        s[i] = char_num;
    }
    printf("%s\n", s);
    return 0;
}

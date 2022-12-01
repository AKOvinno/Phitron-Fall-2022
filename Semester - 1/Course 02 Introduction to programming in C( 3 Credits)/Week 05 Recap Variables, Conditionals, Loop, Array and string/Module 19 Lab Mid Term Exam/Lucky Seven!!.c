#include<stdio.h>
#include<string.h>

int main()
{
    int t;
    scanf("%d", &t);
     getchar();
    while(t) {
        int i, j;
        char s[20];

        gets(s);
        int length = strlen(s);
        char r_s[length];
        for(i = 0, j = length-1; i < length; i++, j--) {
                r_s[i] = s[j];
        }
        r_s[i] = '\0';
        if(strcmp(s, r_s) == 0) {
            if(length > 7) {
                printf("Case #2: %c%d%c\n", s[0], length-2, s[length-1]);
            }
            else {
                printf("Case #3: ");
                for(i = 0; s[i] != '\0'; i++) {
                    printf("%c", s[i]);
                }
                printf("\n");
            }
        }
        else {
            printf("Case #1: Not Palindrome\n");
        }
        t--;
    }
    return 0;
}

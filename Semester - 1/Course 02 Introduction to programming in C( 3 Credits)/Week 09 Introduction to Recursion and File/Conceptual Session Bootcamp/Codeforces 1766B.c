#include<stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t--) {
        int i, j, n, yes = 0;
        scanf("%d", &n);
        char s[n];
        getchar();
        gets(s);
        for(i = 0; s[i] != '\0'; i++) {
            for(j = i+2; s[j] != '\0'; j++) {
                if(s[i] == s[j] && s[i+1] == s[j+1]) {
                    printf("YES\n");
                    yes = 1;
                    break;
                }
                else if(s[i] == s[j] && s[i+1] == s[j+1]) {
                    printf("YES\n");
                    yes = 1;
                    break;
                    }
                }
                if(yes) {
                    break;
                }
            }
            if(!yes) {
            printf("NO\n");
            }
        }
        return 0;
    }

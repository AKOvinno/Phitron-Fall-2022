#include<stdio.h>
#include<string.h>
int main()
{
    int t, i, count;
    scanf("%d", &t);
    while(t) {
        count = 0;
        int n;
        scanf("%d", &n);
        char s[n];
        getchar();
        gets(s);
        for(i = 0; s[i] != '\0'; i++) {
        if(s[i] == '0' && s[i+1] == '1') {
            count++;
        }
        else if(s[i] == '1' && s[i+1] == '0') {
            count++;
        }
        else {
            continue;
            }
        }
        printf("%d\n", count);
        t--;
    }
}

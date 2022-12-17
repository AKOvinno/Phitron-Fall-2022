#include<stdio.h>

int main()
{
    int n, i, count = 0;
    scanf("%d", &n);
    char s[n];
    scanf("%s", s);
    int word = 26;
    int w[word];
    for(i = 0; i <= 26; i++) {
        w[i] = 0;
    }
    for(i = 0; s[i] != '\0'; i++) {
        w[s[i] - 97]++;
    }
    for(i = 0; i <= 26; i++) {
        if(w[i] == 1) {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}

#include<stdio.h>

int main()
{
    char s[100], v = 0, c = 0;
    gets(s);
    for(int i = 0; s[i] != '\0'; i++) {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
            v++;
        }
        else {
            c++;
        }
    }
    printf("Vowel - %d\nConsonant - %d\n", v, c);
    return 0;
}

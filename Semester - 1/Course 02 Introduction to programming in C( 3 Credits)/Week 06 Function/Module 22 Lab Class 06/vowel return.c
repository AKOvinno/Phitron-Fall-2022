#include<stdio.h>

int is_vowel(char ch)
{
    if(ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U')
        return 1;
    else
        return 0;
}

int main()
{
    char ch;
    ch = getchar();
    getchar();
    if(is_vowel(ch))
        printf("The character is a vowel.\n");
    else
        printf("The character is a consonant.\n");

    return 0;
}

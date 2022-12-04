#include<stdio.h>
#include<string.h>
int main()
{
    char ch, str[1000];
    printf("Enter a word: ");
    scanf("%s", str);

    int n, length;
    printf("Enter index no. of character you want to change: ");
    scanf("%d", &n);
    length = strlen(str);
    for(int i = 0; i < length; i++) {
        if(i == n-1) {
            getchar();
            printf("Enter the character you want: ");
            ch = getchar();
            str[i] = ch;
        }
    }
    printf("Corrected word: %s\n", str);
    return 0;
}

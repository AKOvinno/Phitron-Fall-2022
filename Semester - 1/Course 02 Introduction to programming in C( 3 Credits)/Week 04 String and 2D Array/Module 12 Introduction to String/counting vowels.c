#include<stdio.h>

int main()
{
    char sen[1000];
    int i, count = 0;
    gets(sen);
    for(i = 0; sen[i] != '\0'; i++) {
        if(sen[i] == 'a' || sen[i] == 'e' || sen[i] == 'i' || sen[i] == 'o' || sen[i] == 'u') {
            count++;
        }
    }
    printf("No. of vowels = %d\n", count);
    return 0;
}

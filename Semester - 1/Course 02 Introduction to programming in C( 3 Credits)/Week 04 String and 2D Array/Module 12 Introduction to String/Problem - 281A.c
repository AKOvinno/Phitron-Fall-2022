#include<stdio.h>

int main()
{
    char word[1000];
    int i;
    gets(word);

    for(i = 0; ;) {
        if(word[i] >= 'A' && word[i] <= 'Z') {
            break;
        }
        else {
            word[i] = 'A' + (word[i] - 'a');
        }
    }
    printf("%s\n", word);
    return 0;
}

#include<stdio.h>

int main()
{
    char s[100];
    int i, j, k, max, count = 0, max_index;
    gets(s);
    int ara[122];

    for(i = 97; i <= 122; i++) {
        ara[i] = 0;
    }
    for(i = 0; s[i] != '\0'; i++) {
        ara[s[i]]++;
    }
    for(i = 97; i <= 122; i++) {
        if(ara[i] > 0) {
            count++;
        }
    }

    for(k = 1; k <= count; k++) {
        max = ara[0];
        for(i = 97; i <= 122; i++) {
            if(ara[i] > max) {
                max = ara[i];
                max_index = i;
            }
        }
        ara[max_index] = 0;
        while(max) {
            printf("%c", max_index);
            max--;
        }
    }
    return 0;
}


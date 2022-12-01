#include<stdio.h>
#include<string.h>
int main()
{
    char string[100];
    gets(string);
    int i, j, v = 0, c = 0;
    int length = strlen(string);
    for(i = 0; string[i] != '\0'; i++) {
        if(string[i] >= 'A' && string[i] <= 'Z') {
            string[i] += 32;
        }
    }
    for(i = 0; string[i] != '\0'; i++)
    {
        if(string[i] != 'a' && string[i] != 'e' && string[i] != 'i' && string[i] != 'o' && string[i] != 'u' && string[i] != 'y')
        {
            c++;
        }
    }
    int d = 2*c;
    char output[d];
    for(i = 0; i < d; i+=2) {
        output[i] = '.';
    }
    for(i = 0, j = 1; string[i] != '\0'; i++) {
        if(string[i] != 'a' && string[i] != 'e' && string[i] != 'i' && string[i] != 'o' && string[i] != 'u' && string[i] != 'y') {
            output[j] = string[i];
            j+=2;
        }
    }
    for(i = 0; i < d; i++) {
        printf("%c", output[i]);
    }

    return 0;
}

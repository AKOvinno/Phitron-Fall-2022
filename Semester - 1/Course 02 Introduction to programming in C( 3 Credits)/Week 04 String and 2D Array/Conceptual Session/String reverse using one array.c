#include<stdio.h>
#include<string.h>

int main()
{
    char str[1000];
    scanf("%s", str);
    int i, j, len = strlen(str);
    for(i = 0, j = len - 1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    printf("%s\n", str);
    return 0;
}

#include<stdio.h>
#include<string.h>

int main()
{
    char str[1000];
    scanf("%s", str);

    int i, flag = 1;
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += 32;
        }
    }
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == 'c' && str[i+1] == 'h' && str[i+2] == 'a' && str[i+3] == 'm' && str[i+4] == 'p' && str[i+5] == 'i' && str[i+6] == 'o' && str[i+7] == 'n' && str[i+8] == 's') {
            printf("Yes\n");
            flag = 0;
            break;
        }
    }
    if(flag) printf("No\n");

    return 0;
}

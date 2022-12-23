#include<stdio.h>
#include<string.h>

int main()
{
    char str[1000];
    scanf("%s", str);

    char word[] = "champions";

    int i, x = 0;
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += 32;
        }
    }
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == word[x]) {
            x++;
        }
    }
    if(x == 9) {
        printf("Yes\n");
    }
    else {
        printf("No\n");
    }
    return 0;
}

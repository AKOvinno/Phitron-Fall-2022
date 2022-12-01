#include<stdio.h>
int main()
{
    char name[100];
    int i;
    fgets(name, sizeof(name), stdin);

    for(i = 0; name[i] != '\n'; i++) {
        if(name[i] == ' ') {
            continue;
        }
        name[i] -= 32;
    }

    puts(name);

    return 0;
}

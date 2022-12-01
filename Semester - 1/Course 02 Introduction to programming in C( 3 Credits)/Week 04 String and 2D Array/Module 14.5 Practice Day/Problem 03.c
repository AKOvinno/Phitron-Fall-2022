#include<stdio.h>

int main()
{
    char s[1000];
    scanf("%s", s);
    int i, j, ara[26], cost = 0;
    for(i = 0, j = 97; i < 26, j < 123; i++, j++){
        ara[i] = j;
    }
    for(i = 0; s[i] != '\0'; i++) {
        for(j = 0; j < 26; j++) {
            if(s[i] == ara[j]){
                cost += (j+1);
            }
        }
    }
    int count = 0, power = 1, flag = 1;
    while(power <= cost) {
        if(power == cost) {
            flag = 0;
            break;
        }
        power *= 2;
        count++;
    }
    if(flag)
        printf("NO\n");
    else
        printf("YES\ncost = 2^(%d)\n", count);
    return 0;
}

#include<stdio.h>

int main()
{
    char s[1000];
    scanf("%s", s);
    int i, cost = 0;
    for(i = 0; s[i] != '\0'; i++) {
        cost += s[i] - 96;
    }
    int fact = 1, count = 0, flag = 1;
    while(fact <= cost) {
        if(fact == cost) {
            flag = 0;
            break;
        }
        fact *= 2;
        count++;
    }
    if(flag)
        printf("NO\n");
    else
        printf("YES\nCost = 2^%d\n", count);
    return 0;
}

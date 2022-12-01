#include<stdio.h>

int power_of_two(int num)
{
    int i = 1, count = 0;
    while(i < num) {
        i *= 2;
        count++;
    }
    return count;
}
void yes_or_no(int num)
{
    int i, flag = 1;
    for(i = 1; i <= num; i*=2) {
        if(i == num) {
            printf("YES\ncost = 2^%d\n", power_of_two(num));
            flag = 0;
        }
    }
    if(flag)
        printf("NO\n");
}
void finding_cost(char s[])
{
    int i, j, cost = 0;
    int ara[123];
    for(i = 0; i < 123; i++) {
        ara[i] = 0;
    }
    for(i = 0; s[i] != '\0'; i++) {
        ara[s[i]]++;
    }
    for(i = 1, j = 97; i < 27, j < 123; i++, j++) {
        if(ara[j] > 0)
            cost += i*ara[j];
    }
    yes_or_no(cost);
}
int main()
{
    char s[1000];
    scanf("%s", s);
    finding_cost(s);
    return 0;
}

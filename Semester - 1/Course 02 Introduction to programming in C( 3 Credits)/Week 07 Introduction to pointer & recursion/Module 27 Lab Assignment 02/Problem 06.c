#include<stdio.h>

int three(int n)
{
    if(n % 3 == 0)
        return 1;
    else
        return -1;
}
int five(int n)
{
    if(n % 5 == 0)
        return 1;
    else
        return -1;
}
int main()
{
    int n, i, count = 0;
    scanf("%d", &n);
    int ara[n];
    for(i = 0; i < n; i++) {
        scanf("%d", &ara[i]);
    }
    for(i = 0; i < n; i++) {
        if(three(ara[i]) == 1 || five(ara[i]) ==1)
            count++;
    }
    if(count == 0) {
        printf("%d\n", -1);
    }
    else {
        printf("%d\n", count);
    }
    return 0;
}

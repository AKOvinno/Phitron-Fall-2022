#include<stdio.h>

int summ(int n, int ara[])
{
    int i, sum = 0;
    for(i = 0; i < n; i++) {
        int index = i+1;
        if(index % 2 == 0 && ara[i] % 2 == 0)
            sum += index+ara[i];
        else if(index % 2 == 1 && ara[i] % 2 == 1)
            sum += index+ara[i];
    }
    return sum;
}

int main()
{
    int n, i;
    scanf("%d", &n);
    int ara[n];
    for(i = 0; i < n; i++) {
        scanf("%d", &ara[i]);
    }
    printf("%d\n", summ(n, ara));
    return 0;
}

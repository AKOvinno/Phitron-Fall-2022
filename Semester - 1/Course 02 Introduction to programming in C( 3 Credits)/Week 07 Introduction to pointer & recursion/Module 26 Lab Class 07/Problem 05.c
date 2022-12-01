#include<stdio.h>

int is_leap(int y)
{
    if((y % 400 == 0) || (y % 4 == 0 && y % 100 != 0))
        return 1;
    else
        return 0;
}
int is_distinct(int n)
{
    int ld;
    int count_digit[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    while(n > 0)
    {
        ld = n % 10;
        count_digit[ld]++;
        n /= 10;
    }
    int i;
    for(i = 0; i < 10; i++) {
        if(count_digit[i] > 1)
            return 0;
    }
    return 1;
}

int main()
{
    int year;
    scanf("%d", &year);
    if(is_leap(year) && is_distinct(year))
        printf("Beautiful\n");
    else
        printf("Ugly\n");
    return 0;
}

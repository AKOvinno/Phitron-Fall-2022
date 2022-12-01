#include<stdio.h>
int main()
{
    int x, y;
    char ch1, ch2;
    scanf("%d %c %d %c", &x, &ch1, &y, &ch1);
    printf("%d%c\n", x*y, ch1);
    return 0;
}

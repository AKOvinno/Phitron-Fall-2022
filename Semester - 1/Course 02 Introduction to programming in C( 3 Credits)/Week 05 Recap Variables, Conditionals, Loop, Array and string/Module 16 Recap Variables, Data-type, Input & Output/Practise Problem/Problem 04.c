#include<stdio.h>

int main()
{
    int hour, minutes;
    printf("Input hours: ");
    scanf("%d", &hour);
    printf("Input minutes: ");
    scanf("%d", &minutes);
    printf("Total : %d minutes\n", (hour*60)+minutes);
    return 0;
}

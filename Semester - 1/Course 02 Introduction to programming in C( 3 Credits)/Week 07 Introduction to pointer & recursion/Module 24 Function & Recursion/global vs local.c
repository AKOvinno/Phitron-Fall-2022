#include<stdio.h>

int g = 7;

void add_two_nums()
{
    int g = 13;
    printf("Printing in add function %d\n", g);
    g += 2;
    printf("Printing in add function %d\n", g);
    {
        extern int g;
        printf("Printing global g in add function %d\n", g);
    }
}

int main()
{
    add_two_nums();
    int g = 21;
    printf("Printing in main function %d\n", g);
    {
        extern int g;
        printf("Printing global g in main function %d\n", g);
    }
    return 0;
}

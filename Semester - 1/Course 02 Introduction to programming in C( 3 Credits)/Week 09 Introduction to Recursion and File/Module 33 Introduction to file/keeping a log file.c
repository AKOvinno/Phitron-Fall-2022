#include<stdio.h>

int main()
{
    FILE* logfile = fopen("log.txt", "a");
    fprintf(logfile, "Hello at 12:10 AM\n");
    return 0;
}

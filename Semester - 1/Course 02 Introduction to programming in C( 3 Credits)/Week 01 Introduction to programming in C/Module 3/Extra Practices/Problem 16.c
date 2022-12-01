#include<stdio.h>

int main()
{
    char ch;
    scanf("%c", &ch);

    if(ch > 47 && ch < 58) {
        printf("This is a digit.\n");
    }
    else if(ch > 64 && ch <91 || ch > 96 && ch <122) {
        printf("This is an alphabet.\n");
    }
    else {
        printf("This is a special character.\n");
    }
    return 0;
}

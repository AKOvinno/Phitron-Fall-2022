#include<stdio.h>

int main()
{
    char ch;

    printf("Input the grade: ");
    scanf("%c", &ch);

    if(ch == 'E') {
        printf("You have chosen: Excellent\n");
    }
    else if(ch == 'V') {
        printf("You have chosen: Very Good\n");
    }
    else if(ch == 'G') {
        printf("You have chosen: Good\n");
    }
    else if(ch == 'A') {
        printf("You have chosen: Average\n");
    }
    else if(ch == 'F') {
        printf("You have chosen: Fail\n");
    }
    return 0;
}

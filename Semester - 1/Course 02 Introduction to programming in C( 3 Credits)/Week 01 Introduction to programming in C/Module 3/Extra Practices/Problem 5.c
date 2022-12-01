#include<stdio.h>

int main()
{
    int age;
    scanf("%d", &age);
    if(age > 17) {
        printf("Congratulation! You are eligible for casting your vote.\n");
    }
    else {
        printf("Sorry! You are not eligible for casting your vote.\n");
    }
    return 0;
}

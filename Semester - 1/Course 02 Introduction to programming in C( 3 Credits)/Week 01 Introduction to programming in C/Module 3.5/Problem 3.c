#include<stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    if(num < 0) {
        printf("Please enter a positive number: ");
        scanf("%d", &num);
    }
    if(num % 2 == 0) {
        printf("Even\n");
    }
    else {
        printf("Odd\n");
    }
    return 0;
}

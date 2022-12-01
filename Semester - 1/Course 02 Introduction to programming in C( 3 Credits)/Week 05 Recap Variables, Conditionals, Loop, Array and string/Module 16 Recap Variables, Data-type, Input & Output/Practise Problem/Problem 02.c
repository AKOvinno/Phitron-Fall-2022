#include<stdio.h>

int main()
{
    int num1, num2;
    printf("Input 1st number (positive or negative) : ");
    scanf("%d", &num1);
    printf("Input 2nd number (positive or negative) : ");
    scanf("%d", &num2);

    if(num1 < 0) {
        num1 *= -1;
    }
    if(num2 < 0) {
        num2 *= -1;
    }
    printf("The absolute value of 1st number is : %d\n", num1);
    printf("The absolute value of 2nd number is %d\n", num2);
    return 0;
}

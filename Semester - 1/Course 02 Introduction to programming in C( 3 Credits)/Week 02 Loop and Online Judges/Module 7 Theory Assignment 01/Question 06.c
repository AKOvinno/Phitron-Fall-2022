#include<stdio.h>

int main()
{
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    if(num2 != 0 && (num1 % num2) == 0) {
        printf("The first number is divisible by the second number.\n");
    }
    else if(num1 != 0 && (num2 % num1) == 0) {
        printf("The second number is divisible by the first number.\n");
    }
    else {
        printf("None of them are divisible by the other.\n");
    }
    return 0;
}

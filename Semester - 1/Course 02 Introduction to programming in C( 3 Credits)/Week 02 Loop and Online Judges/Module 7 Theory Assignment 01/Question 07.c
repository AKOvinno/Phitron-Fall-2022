#include<stdio.h>

int main()
{
    int a, b, num1, num2, temp, gcd;
    scanf("%d %d", &num1, &num2);
    a = num1;
    b = num2;

    if(num1 == 0) {
        gcd = num1;
    }
    else if(num2 == 0) {
        gcd = num2;
    }
    else {
        while (num2 != 0) {
            temp = num2;
            num2 = num1 % num2;
            num1 = temp;
        }
        gcd = num1;
    }
    printf("The GCD of %d and %d is %d.\n", a, b, gcd);
    return 0;
}

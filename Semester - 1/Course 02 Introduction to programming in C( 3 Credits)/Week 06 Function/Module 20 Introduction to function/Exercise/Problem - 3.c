#include<stdio.h>

int largest_num(int num1, int num2, int num3)
{
    if(num1 > num2 && num1 > num3) {
        return num1;
    }
    else if(num2 > num1 && num2 > num3) {
        return num2;
    }
    else {
        return num3;
    }
}

int main()
{
    int num1, num2, num3;
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("Largest = %d\n", largest_num(num1, num2, num3));
    return 0;
}

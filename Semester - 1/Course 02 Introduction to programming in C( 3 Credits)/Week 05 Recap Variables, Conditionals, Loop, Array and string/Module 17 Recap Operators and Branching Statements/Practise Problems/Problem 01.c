#include<stdio.h>

int main()
{
    int num, i, j, sum = 0;
    printf("Input number of terms : ");
    scanf("%d", &num);
    printf("The odd numbers are : ");
    for(i = 1, j = 1; i < 11; i++, j+=2) {
        printf("%d ", j);
        sum += j;
    }
    printf("\nThe Sum of odd Natural Number upto %d terms : %d", num, sum);
    return 0;
}

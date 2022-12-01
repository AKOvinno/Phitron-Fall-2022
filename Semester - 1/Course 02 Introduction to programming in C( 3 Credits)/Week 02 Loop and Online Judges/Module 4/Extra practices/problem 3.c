#include<stdio.h>

int main()
{
    int num;
    scanf("%d", &num);
    int i, sum = 0;
    printf("The first %d natural number is : \n", num);
    for(i = 1; i <= num; i++) {
        printf("%d ", i);
        sum+=i;
    }
    printf("\nThe Sum of Natural Number upto 7 terms : %d\n", sum);
    return 0;
}


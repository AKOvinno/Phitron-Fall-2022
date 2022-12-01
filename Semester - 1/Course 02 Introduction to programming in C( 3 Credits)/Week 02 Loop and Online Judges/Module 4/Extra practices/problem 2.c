#include<stdio.h>

int main()
{
    int i, sum = 0;
    printf("The first 10 natural number is : \n");
    for(i = 1; i < 11; i++) {
        printf("%d ", i);
        sum+=i;
    }
    printf("\nThe Sum is : %d\n", sum);
    return 0;
}

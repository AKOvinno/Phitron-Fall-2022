#include<stdio.h>

int main()
{
    int i, j;
    float x, summ, avg;
    for(i = 1; i <= 10; i++) {
        printf("Enter marks of %dth std: ", i);
        summ = 0.0;
        for(j = 1; j <= 3; j++) {
            scanf("%f", &x);
            summ += x;
        }
        avg = summ/3;
        printf("Average = %f\n", avg);
    }
    return 0;
}

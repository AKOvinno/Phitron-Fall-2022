#include<stdio.h>
int main()
{
    int num;
    printf("Input number of terms : ");
    scanf("%d", &num);
    for(int i = 1; i <= num; i++) {
        printf("Number is : %d and Square of the %d is : %d\n", i, i, i*i);
    }
    return 0;
}

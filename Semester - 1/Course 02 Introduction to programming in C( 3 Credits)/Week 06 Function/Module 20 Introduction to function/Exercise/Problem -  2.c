#include<stdio.h>
int even_or_odd(int num)
{
    if(num % 2 == 0) {
        return 1;
    }
    else {
        return 0;
    }
}
int main()
{
    int num;
    scanf("%d", &num);
    int ans = even_or_odd(num);
    if(ans) {
        printf("Even\n");
    }
    else {
        printf("Odd\n");
    }
    return 0;
}

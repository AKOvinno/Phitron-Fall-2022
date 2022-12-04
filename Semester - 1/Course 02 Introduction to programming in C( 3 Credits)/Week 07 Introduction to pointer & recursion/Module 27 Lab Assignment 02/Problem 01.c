#include<stdio.h>

int summ(int n)
{
    int count = 0, start = (n - (n%6))+1;
    int sum = (n/6)*-9;
    if(n % 6 == 0) {
        return (n/6)*-9;
    }
    if(n % 6 != 0) {
        for(int i = start; i <= n; i++) {
            count++;
            if(count > 3) {
                sum += (i*-1);
                continue;
            }
            sum += i;
        }
    }
    return sum;
}

int main()
{
    int n, i, count = 0;
    scanf("%d", &n);
    printf("%d\n", summ(n));
    return 0;
}

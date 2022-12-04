#include<stdio.h>
#include<math.h>
int is_prime(int n)
{

    if(n == 2)
        return 1;
    else if(n % 2 == 0 || n == 1)
        return 0;
    else {
        for(int i = 3; i <= sqrt(n); i+=2) {
            if(n % i == 0)
                return 0;
        }
    }
    return 1;
}
float avg_even(int n, int ptr[])
{
    int i, sum = 0, count = 0;
    for(i = 0; i < n; i++) {
        if(ptr[i] % 2 == 0) {
            count++;
            sum += ptr[i];
        }
    }
    if(count == 0)
        return 0;
    return (sum/count)*1.0;
}
int main()
{
    int n, i, count = 0;
    scanf("%d", &n);
    int ara[n];
    for(i = 0; i < n; i++) {
        scanf("%d", &ara[i]);
    }
    //traversing the array using pointers
    int* p = ara;
    for(i = 0; i < n; i++) {
        if(is_prime(*(p+i)) == 1)
            count++;
    }
    printf("%d\n", count);
    printf("%0.2f\n", avg_even(n, ara));
    return 0;
}

#include<stdio.h>
#include<math.h>
int main()
{
    int n, l, r, i;
    scanf("%d %d %d", &n, &l, &r);
    int min_sum = 0, max_sum = 0;
    min_sum += (n-l);
    for(i = 0; i <= l-1; i++) {
        min_sum += pow(2, i);
    }
    max_sum += (n-r) * pow(2, r-1);
    for(i = 0; i <= r-1; i++) {
        max_sum += pow(2, i);
    }
    printf("%d %d\n", min_sum, max_sum);
    return 0;
}

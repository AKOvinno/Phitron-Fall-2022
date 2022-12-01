#include<stdio.h>
double median(int n, int ara[])
{
    int i, j, temp;
    for(i = 0; i < n; i++) {
        for(j = i; j < n; j++) {
            if(ara[j] < ara[i]) {
                temp = ara[j];
                ara[j] = ara[i];
                ara[i] = temp;
            }
        }
    }
    if(n%2 != 0)
        return ara[n/2];
    else
        return (ara[n/2] + ara[n/2-1])/2.0;
}
int main()
{
    int n, i;
    scanf("%d", &n);
    int ara[n];
    for(i = 0; i < n; i++) {
        scanf("%d", &ara[i]);
    }
    printf("%0.2lf\n", median(n, ara));
    return 0;
}

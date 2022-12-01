#include<stdio.h>

int largest(int k, int n, int ara[])
{
    int largest = ara[n-k];
    return largest;
}

int smallest(int k, int n, int ara[])
{
    int smallest = ara[k-1];
    return smallest;
}

int sorting(int n, int ara[])
{
    int i, j, temp;
    for(i = 0; i < n; i++) {
        for(j = i+1; j < n; j++) {
            if(ara[i] > ara[j]) {
                temp = ara[i];
                ara[i] = ara[j];
                ara[j] = temp;
            }
        }
    }
    int k;
    scanf("%d", &k);
    printf("%dth largest element = %d\n", k, largest(k, n, ara));
    printf("%dth smallest element = %d\n", k, smallest(k, n, ara));
}

int main()
{
    int n, i;
    scanf("%d", &n);
    int ara[n];
    for(i = 0; i < n; i++) {
        scanf("%d", &ara[i]);
    }
    sorting(n, ara);
    return 0;
}

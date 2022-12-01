#include<stdio.h>

void sort(int n, int ara[])
{
    int i, j, temp;
    for(i = 0; i < n; i++) {
        for(j = i+1; j < n; j++) {
            if(ara[i] > ara[j]) {
                temp = ara[j];
                ara[j] = ara[i];
                ara[i] = temp;
            }
        }
    }
    for(i = 0; i < n; i++) {
        printf("%d ", ara[i]);
    }
}

int main()
{
    int n, i;
    scanf("%d", &n);
    int ara[n];
    for(i = 0; i < n; i++) {
        scanf("%d", &ara[i]);
    }
    sort(n, ara);
    return 0;
}

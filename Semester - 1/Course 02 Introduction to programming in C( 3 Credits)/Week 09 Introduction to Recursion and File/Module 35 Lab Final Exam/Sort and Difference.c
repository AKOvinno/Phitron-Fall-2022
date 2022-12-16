#include<stdio.h>

int main()
{
    int n, i, j, temp;
    scanf("%d", &n);
    int ara1[n], ara2[n];
    for(i = 0; i < n; i++) {
        scanf("%d", &ara1[i]);
    }
    for(i = 0; i < n; i++) {
        scanf("%d", &ara2[i]);
    }
    for(i = 0; i < n; i++) {
        for(j = 1; j < n; j++) {
            if(ara1[j] < ara1[j-1]) {
                temp = ara1[j-1];
                ara1[j-1] = ara1[j];
                ara1[j] = temp;
            }
        }
    }
    for(i = 0; i < n; i++) {
        for(j = 1; j < n; j++) {
            if(ara2[j] > ara2[j-1]) {
                temp = ara2[j-1];
                ara2[j-1] = ara2[j];
                ara2[j] = temp;
            }
        }
    }
    for(i = 0; i < n; i++) {
        printf("%d ", ara1[i]-ara2[i]);
    }
    return 0;
}

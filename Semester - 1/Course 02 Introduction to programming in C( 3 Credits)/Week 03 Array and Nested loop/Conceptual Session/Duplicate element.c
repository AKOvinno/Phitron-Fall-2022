#include<stdio.h>

int main()
{
    int n, i, j, duplicate = 0, unique;
    scanf("%d", &n);
    int ara[n];
    for(i = 0; i < n; i++) {
        scanf("%d", &ara[i]);
    }
    for(i = 0; i < n; i++) {
        for(j = i+1; j < n; j++) {
            if(ara[i] == ara[j]) {
                duplicate++;
            }
        }
    }
    printf("No. of Duplicate elements = %d\n", duplicate);
    printf("No of unique elements = %d\n", (n-duplicate));
    return 0;
}

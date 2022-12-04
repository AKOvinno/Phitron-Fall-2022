#include<stdio.h>

int main()
{
    int n, i, j, check, found;
    scanf("%d", &n);
    int ara[n], unique_ara[n];
    for(i = 0; i < n; i++) {
        scanf("%d", &ara[i]);
    }
    for(i = 0; i < n; i++) {
        unique_ara[i] = 0;
    }
    for(i = 0; i < n; i++) {
        check = ara[i];
        found = 0;
        for(j = 0; j < n; j++) {
            if(unique_ara[j] == check)
                found = 1;
        }
        if(!found)
            unique_ara[i] = check;

    }
    for(j = 0; j < n; j++) {
        if(unique_ara[j] > 0)
            printf("%d ", unique_ara[j]);
    }
    return 0;
}

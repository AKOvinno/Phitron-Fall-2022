#include<stdio.h>

int main()
{
    int n, i;
    scanf("%d", &n);
    if(n > 0){
        for(i = n; i >= -n; i--) {
            printf("%d ", i);
        }
    }
    else {
        for(i = n; i <= (-1)*n; i++) {
            printf("%d ", i);
        }
    }
    return 0;
}

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, i;
    scanf("%d", &n);

    int* ptr;
    ptr = (int*)malloc(sizeof(int)*n);

    for(i = 0; i < n; i++) {
        scanf("%d", (ptr+i));
    }
    for(i = 0; i < n; i++) {
        printf("%d ", *(ptr+i));
    }
    return 0;
}

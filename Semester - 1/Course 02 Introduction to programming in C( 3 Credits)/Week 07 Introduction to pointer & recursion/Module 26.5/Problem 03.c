#include<stdio.h>

void print_array(int* p, int ptr[])
{
    int i;
    for(i = 0; i < *p; i++) {
        printf("%d ", *ptr+i);
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
    print_array(&n, ara);
    return 0;
}

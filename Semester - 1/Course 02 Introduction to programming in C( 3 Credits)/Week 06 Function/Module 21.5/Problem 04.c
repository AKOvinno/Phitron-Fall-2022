#include<stdio.h>

void even_printing(int n)
{
    int i;
    for(i = 2; i <= n; i+=2) {
        printf("%d ", i);
    }
}

void is_even(int n)
{
    if(n % 2 == 0) {
        even_printing(n);
    }
    else {
        n--;
        even_printing(n);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    is_even(n);
    return 0;
}

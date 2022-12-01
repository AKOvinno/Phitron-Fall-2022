#include<stdio.h>

void recursion(int n)
{
    if(n > 0) {
        printf("%d ", n);
        recursion(n-1);
    }
    else
        return;
}

int main()
{
    int n;
    scanf("%d", &n);

    recursion(n);

    return 0;

}

#include<stdio.h>
void func(int x, int y, int* p, int* q)
{
    *p = x>y?x:y;
    *q = x<y?x:y;
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int large, small;

    func(a, b, &large, &small);

    printf("Large = %d, Small = %d\n", large, small);
    return 0;
}

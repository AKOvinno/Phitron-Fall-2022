#include<stdio.h>

int max_of_three(int x, int y, int z);

int main()
{
    int a, b, c, i, m;

    for(int i = 0; i < 5; i++) {
        scanf("%d %d %d", &a, &b, &c);
        m = max_of_three(a, b, c);
        printf("The maximum value is %d\n", m);
    }
    return 0;
}

int max_of_three(int x, int y, int z)
{
    if(x > y && x > z)
        return x;
    else if(y > x && y > z)
        return y;
    else
        return z;
}

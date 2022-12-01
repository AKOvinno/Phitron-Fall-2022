#include<stdio.h>
#include<math.h>
float f(int x, int y);
int absolute(int x);
int main()
{
    int x, y;
    x = 12;
    y = 7;
    float ans;
    ans = f(x, y);
    printf("%f\n", ans);
    return 0;
}

float f(int x, int y)
{
    int tempans = absolute(x-3) + (y+4)*(y+4);
    return sqrt(tempans);
}
int absolute(int x)
{
    if(x >= 0)
        return x;
    else
        return (-1)*x;
}

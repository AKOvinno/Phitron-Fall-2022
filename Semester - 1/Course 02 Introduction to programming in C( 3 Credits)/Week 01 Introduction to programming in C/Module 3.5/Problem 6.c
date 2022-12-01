#include<stdio.h>
int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    if(x+y >= 100) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
    return 0;
}

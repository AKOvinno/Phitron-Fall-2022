#include<stdio.h>
int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    if(x > 0) {
        if(y > 0) {
            printf("The coordinate point (%d,%d) lies in the First quadrant.", x, y);
        }
        else {
            printf("The coordinate point (%d,%d) lies in the Fourth quadrant.", x, y);
        }
    }
    else {
        if(y > 0) {
            printf("The coordinate point (%d,%d) lies in the Second quadrant.", x, y);
        }
        else {
            printf("The coordinate point (%d,%d) lies in the Third quadrant.", x, y);
        }
    }
    return 0;
}

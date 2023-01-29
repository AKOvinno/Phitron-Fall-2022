#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--) {
        int a, b;
        scanf("%d %d", &a, &b);
        if(a == 0) {
            printf("1\n");
        }
        else if(a > 0 && b > 0) {
            printf("%d\n", a+1+2*b);
        }
        else if(b == 0) {
            printf("%d\n", a+1);
        }
    }
    return 0;
}

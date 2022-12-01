#include<stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if(a > b) {
        printf("A is bigger\n");
    }
    else if(b > a) {
        printf("B is bigger\n");
    }
    else {
        printf("They are equal\n");
    }
    return 0;
}

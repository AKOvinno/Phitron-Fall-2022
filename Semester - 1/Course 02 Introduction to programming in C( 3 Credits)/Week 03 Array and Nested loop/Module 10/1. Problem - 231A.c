#include<stdio.h>

int main()
{
    int n, i, j, a, b, c, counter;
    scanf("%d", &n);
    int solved = 0;
    for(i = 0; i < n; i++) {
        counter = 0;
        for(j = 0; j < 3; j++) {
            scanf("%d", &a);
            counter+=a;
        }
        if(counter >= 2) {
            solved++;
        }
    }
    printf("%d\n", solved);
    return 0;
}

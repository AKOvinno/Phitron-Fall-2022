#include<stdio.h>

int main()
{
    int T, i, x, c_t;
    char ch;
    scanf("%d", &T);
    for(i = T; i > 0; i--) {
        scanf("%d %c", &x, &ch);
        if(x < 60 && x >=0) {
            c_t = (60 - x) + 100;
            printf("%d minutes\n", c_t);
        }
        else if(x >= 60 && x < 80) {
            c_t = (80 - x)*2 + 60;
            printf("%d minutes\n", c_t);
        }
        else if(x >= 80 && x <= 100) {
            c_t = (100-x)*3;
            printf("%d minutes\n", c_t);
        }
    }
    return 0;
}

#include<stdio.h>

int main()
{
    int n, plus = 0, minus = 0, max_plus = 0, max_minus = 0;
    scanf("%d", &n);

    char s[n];
    getchar();
    gets(s);
    for(int i = 0; s[i] != '\0'; i++) {

        if(s[i] == '+') {
            plus++;
            if(s[i+1] != '+') {
                if(plus > max_plus) {
                    max_plus = plus;
                }
                plus = 0;
            }
        }
        if(s[i] == '-') {
            minus++;
            if(s[i+1] != '-') {
                if(minus > max_minus) {
                    max_minus = minus;
                }
                minus = 0;
            }
        }
    }
    if(max_plus > max_minus) {
        printf("%d\n", max_plus);
    }
    else {
        printf("%d\n", max_minus);
    }
    return 0;
}

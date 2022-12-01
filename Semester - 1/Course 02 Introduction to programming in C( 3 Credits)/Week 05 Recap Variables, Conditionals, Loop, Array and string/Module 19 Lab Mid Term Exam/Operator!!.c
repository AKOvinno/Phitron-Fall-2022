#include<stdio.h>

int main()
{
    char s[20];
    gets(s);
    int num1, num2, i, sum = 0;
    scanf("%d %d", &num1, &num2);
    for(i = 0; s[i] != '\0'; i++) {
        if(s[i] == '+') {
            sum += num1 + num2;
        }
        else {
            sum += num1 * num2;
        }
    }
    printf("%d\n", sum);
}

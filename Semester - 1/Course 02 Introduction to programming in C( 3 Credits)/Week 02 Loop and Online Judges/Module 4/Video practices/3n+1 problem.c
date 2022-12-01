/*#include<stdio.h>

int main()
{
    int num;
    scanf("%d", &num);
    printf("%d -> ", num);
    while (num != 1) {
        if(num % 2 == 0) {
            num/=2;
            printf("%d -> ", num);
        }
        else {
            num = 3*num + 1;
            printf("%d -> ", num);
        }
    }
    return 0;
}
*/

#include<stdio.h>
int main()
{
    int num;
    printf("Please Enter a number: ");
    scanf("%d", &num);

    for(; num != 1; ) {
        printf("-->%d\n", num);
        if(num%2 == 0) {
            num/=2;
        }
        else {
            num = 3*num + 1;
        }
    }
    printf("-->%d\n", num);
    return 0;
}

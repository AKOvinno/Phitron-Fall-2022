#include<stdio.h>

int main()
{
    int sp, cp;
    scanf("%d %d", &cp, &sp);

    if(cp < sp) {
        printf("You can booked your profit amount: %d.\n", sp-cp);
    }
    else if(cp > sp) {
        printf("You got a loss of amount : %d\n", cp - sp);
    }
    else {
        printf("You are running in no profit no loss condition.\n");
    }
    return 0;
}

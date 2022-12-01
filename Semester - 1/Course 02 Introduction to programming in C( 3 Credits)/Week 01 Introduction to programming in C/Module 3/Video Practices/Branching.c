#include<stdio.h>

int main()
{
    int x;
    printf("Please Enter an input: ");
    scanf("%d", &x);

    if(x%2==0) {
        // code will be executed if condition is true
        printf("The input is an Even number.\n");
    }
    else{
        printf("The input is an Odd number.\n");
    }
    return 0;

}

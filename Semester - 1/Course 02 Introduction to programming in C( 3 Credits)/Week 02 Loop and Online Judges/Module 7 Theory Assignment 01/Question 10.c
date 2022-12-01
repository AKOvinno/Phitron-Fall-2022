#include<stdio.h>

int main()
{
    int num, i, prime = 0;
    scanf("%d", &num);

    if(num < 2) {
        printf("Composite\n");
    }
    else if(num == 2) {
        printf("Prime\n");
    }
    else {
        for(i = 2; i < num; i++) {
            if((num % i) == 0) {
                printf("Composite\n");
                prime = 0;
                break;
            }
            else {
                prime = 1;
            }
        }
    }
    if(prime == 1) {
        printf("Prime\n");
    }
    return 0;
}

#include<stdio.h>

int main()
{
    int num, i;
    scanf("%d", &num);
    if(num == 0) {
        printf("%d has no factors.\n", num);
    }
    else if(num > 0) {
        printf("The factors of %d are:", num);
        for(i = 1; i < num; i++) {
            if((num % i) == 0) {
                printf(" %d,", i);
            }
        }
        printf(" %d.\n", num);
    }
    else {
        printf("The factors of %d are:", num);
        for(i = -1; i > num; i--) {
            if((num % i) == 0) {
                printf(" %d,", i);
            }
        }
        printf(" %d.\n", num);
    }

    return 0;
}

#include<stdio.h>

int main()
{
    int input;
    scanf("%d", &input);
    if(input < 0) {
        printf("Please enter a positive number: ");
        scanf("%d", &input);
    }
    if(input > -1 && input < 33) {
        printf("F\n");
    }
    else if(input >32 && input < 40) {
        printf("D\n");
    }
    else if(input > 39 && input < 50) {
        printf("C\n");
    }
    else if(input > 49 && input < 60) {
        printf("B\n");
    }
    else if(input > 59 && input < 70) {
        printf("A-\n");
    }
    else if(input > 69 && input < 80) {
        printf("A\n");
    }
    else if(input > 79 && input < 101) {
        printf("A+\n");
    }
    else {
        printf("Wrong input!\nRun the program again...\n");
    }
    return 0;
}

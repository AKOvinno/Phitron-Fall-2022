#include<stdio.h>

char grade(int mark)
{
    if(mark >= 80 && mark <= 100) {
        return 'A';
    }
    else if(mark >= 60 && mark <= 79) {
        return 'B';
    }
    else if(mark >= 40 && mark <= 59) {
        return 'C';
    }
    else if(mark >= 0 && mark <= 39) {
        return 'F';
    }
}

int main()
{
    int mark;
    scanf("%d", &mark);
    printf("%c\n", grade(mark));
    return 0;
}

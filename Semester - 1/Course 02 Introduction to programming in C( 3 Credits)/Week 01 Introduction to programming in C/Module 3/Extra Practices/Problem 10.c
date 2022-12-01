#include<stdio.h>

int main()
{
    int Maths, Physics, Chemistry;

    printf("Input the marks obtained in Physics: ");
    scanf("%d", &Physics);
    printf("Input the marks obtained in Chemistry: ");
    scanf("%d", &Chemistry);
    printf("Input the marks obtained in Maths: ");
    scanf("%d", &Maths);

    if(Maths>= 65 && Physics>= 55 && Chemistry>=50) {
        if(Maths+Physics+Chemistry == 190 || Maths+Physics == 140) {
            printf("The candidate is eligible for admission.\n");
        }
        else {
            printf("The Candidate is not eligible for admission.\n");
        }
    }
    return 0;
}

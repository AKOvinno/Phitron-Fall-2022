#include<stdio.h>

int main()
{
    int height, width;
    printf("Input the height of the Rectangle : ");
    scanf("%d", &height);
    printf("Input the width of the Rectangle : ");
    scanf("%d", &width);
    printf("Perimeter of the Rectangle is : %lf", 2.0*(height+width));
    return 0;
}

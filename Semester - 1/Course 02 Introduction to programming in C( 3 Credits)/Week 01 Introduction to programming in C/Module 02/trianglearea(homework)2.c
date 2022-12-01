#include<stdio.h>

int main()
{
    int a;
    printf("Enter the equal side of a triangle: ");
    scanf("%d", &a);

    float area;
    area = 0.433012*a*a;
    printf("The area of the triangle is %f", area);

    return 0;
}

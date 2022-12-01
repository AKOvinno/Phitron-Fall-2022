#include<stdio.h>
#include<math.h>
int main()
{
    int a, b, c;
    double s, area;
    printf("Enter the three sides of a triangle: \n");
    scanf("%d %d %d", &a, &b, &c);
    s = (a+b+c)/2.0;
    printf("Half perimeter = %lf\n", s);
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("The area of the triangle is : %lf\n", area);
    return 0;
}

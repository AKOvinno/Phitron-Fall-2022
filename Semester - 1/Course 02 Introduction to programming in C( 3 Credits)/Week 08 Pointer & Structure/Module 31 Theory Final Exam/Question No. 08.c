#include<stdio.h>

struct student
{
    char name[100];
    int roll;
    double marks;
};
int main()
{
    struct student s1;

    printf("Enter Information:\n");

    printf("Enter name: ");
    scanf("%s", &s1.name);
    printf("Enter roll number: ");
    scanf("%d", &s1.roll);
    printf("Enter marks:");
    scanf("%lf", &s1.marks);

    printf("\nDisplaying Information:\n");
    printf("Name: %s\n", s1.name);
    printf("Roll number: %d\n", s1.roll);
    printf("Marks: %0.0lf\n", s1.marks);

    return 0;
}
/*
#include<stdio.h>

struct student
{
    double weight;
    int roll;
    int age;
};
int main()
{
    struct student s1 = {.weight = 88.83, .roll = 15, .age = 24};
    struct student* info;
    info = &s1;

    //accessing and printing using arrow operator
    printf("%d %0.2lf %d\n", info->roll, info->weight, info->age);

    return 0;
}
*/

#include<stdio.h>

struct Student {
    double weight;
    int roll;
    int age;
};
int main()
{
    struct Student s = {.roll = 12, .weight = 85.21, .age = 24};
    struct Student s2 = {.roll = 12, .weight = 85.21, .age = 24};
    struct Student* sp;
    sp = &s;

    printf("%d %lf %d\n", sp->roll, sp->weight, sp->age);

    return 0;
}
